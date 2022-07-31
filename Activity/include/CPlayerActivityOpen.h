#pragma once

#include "PublicHeader.h"
#include "CPlayerCmpt.h"
#include "ActivityOpenConfig.pb.h"

class CPlayerActivityOpen : public CPlayerCmpt
{
public:
    virtual void OnInit();
    virtual void OnTick();
    virtual void OnAfterRoleLogin();
    virtual void OnZeroTime();

public:
    void NotifyActivityOpenConfig();

    bool IsActivityOpenOrDelay(const resource::ActivityOpenConfig &rConfig);

private:
    int64_t m_tLastTick;
};