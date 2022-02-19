#include "CConfigTableMgr.h"

CConfigTableMgr::CConfigTableMgr() {}

CConfigTableMgr::~CConfigTableMgr() {}

int CConfigTableMgr::Init()
{
    int iRet = CConfigTable<Resource::AccountInfo_ARRAY>::Instance()->LoadBin(
        "AccountInfo.bin");
    if (iRet != 0)
    {
        SPDLOG_ERROR("LoadBin Failed BinName:{}", "AccountInfo");
        return -1;
    }

    iRet = CConfigTable<Resource::GoodsInfo_ARRAY>::Instance()->LoadBin(
        "GoodsInfo.bin");
    if (iRet != 0)
    {
        SPDLOG_ERROR("LoadBin Failed BinName:{}", "GoodsInfo");
        return -1;
    }

    iRet = CConfigTable<Resource::ActivityOpenCfg_ARRAY>::Instance()->LoadBin("ActivityOpenCfg.bin");
    if (iRet != 0)
    {
        SPDLOG_ERROR("LoadBin Failed BinName:{}", "ActivityOpenCfg");
        return -1;
    }
    return 0;
}

const Resource::ActivityOpenCfg& CConfigTableMgr::GetActivityCfgByActivityID(uint32_t iActivityID)
{
    for (auto iter : CConfigTable<Resource::ActivityOpenCfg_ARRAY>::Instance()->GetConfig()->items())
    {
        if (iter.activityid() == iActivityID)
        {
            return iter;
        }
    }
}
