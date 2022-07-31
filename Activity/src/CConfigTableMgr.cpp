#include "CConfigTableMgr.h"

CConfigTableMgr::CConfigTableMgr() {}

CConfigTableMgr::~CConfigTableMgr() {}

int CConfigTableMgr::Init()
{
    int iRet = CConfigTable<resource::ActivityOpenConfigList>::Instance()->LoadBin("ActivityOpenConfig.bin");
    if (iRet != 0)
    {
        SPDLOG_ERROR("LoadBin Failed BinName:{}", "ActivityOpenConfig");
        return -1;
    }
    return 0;
}

const resource::ActivityOpenConfig& CConfigTableMgr::GetActivityCfgByActivityID(uint32_t iActivityID)
{
    for (auto iter : CConfigTable<resource::ActivityOpenConfigList>::Instance()->GetConfig()->data())
    {
        if (iter.activityid() == iActivityID)
        {
            return iter;
        }
    }
}
