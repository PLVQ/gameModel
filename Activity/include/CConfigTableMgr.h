#pragma once
#include "CSingleton.h"
#include "PublicHeader.h"
#include "ResourceHeader.h"

class CConfigTableMgr : public CSingleton<CConfigTableMgr>
{
public:
    CConfigTableMgr();
    ~CConfigTableMgr();
    int Init();

    const Resource::ActivityOpenCfg& GetActivityCfgByActivityID(uint32_t iActivityID);
private:
};