#pragma once

#include "PublicHeader.h"
#include "CPlayerCmpt.h"
#include "ActivityOpenCfg.pb.h"

class CPlayerActivityOpen : public CPlayerCmpt
{
public:
    virtual void OnInit();
    virtual void OnTick();
    virtual void OnAfterRoleLogin();
    virtual void OnZeroTime();

public:
    void NotifyActivityOpenCfg();

    bool IsActivityOpenOrDelay(const Resource::ActivityOpenCfg &rConfig);

private:
    int64_t m_tLastTick;
};