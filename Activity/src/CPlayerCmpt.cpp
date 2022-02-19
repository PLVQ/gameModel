#include "CPlayerCmpt.h"
#include "CPlayer.h"

void CPlayerCmpt::OnInit()
{

}

void CPlayerCmpt::OnResume()
{

}

void CPlayerCmpt::OnFree()
{

}



void CPlayerCmpt::OnTick()
{

}

void CPlayerCmpt::OnInitCreateRole()
{

}

void CPlayerCmpt::OnPreRoleLogin()
{

}

void CPlayerCmpt::OnAfterRoleLogin()
{

}

void CPlayerCmpt::OnZeroTime()
{

}

void CPlayerCmpt::OnDailyReset()
{

}

void CPlayerCmpt::OnWeekReset()
{

}

void CPlayerCmpt::OnRoleLogout()
{

}

void CPlayerCmpt::OnRoleReconnect()
{

}

void CPlayerCmpt::OnRoleLevelUp(uint32_t iOldLevel)
{

}

void CPlayerCmpt::OnPackRoleData(Player& stPlayer, bool bFullData /*= true*/)
{

}

void CPlayerCmpt::Init(CPlayer* pPlayer)
{
    m_pPlayer = pPlayer;

    OnInit();
}

void CPlayerCmpt::Resume(CPlayer* pPlayer)
{
    m_pPlayer = pPlayer;

    OnResume();
}

void CPlayerCmpt::Tick()
{
    if (IsDirty())
    {
        bool bDirty = OnDirty();
        if (!bDirty)
        {
            ClearDirty();
        }
    }
    OnTick();
}

void CPlayerCmpt::Free()
{

}

