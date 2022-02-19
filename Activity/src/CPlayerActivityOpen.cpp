#include "CPlayerActivityOpen.h"
#include "CTime.h"
#include "CConfigTable.h"
#include "CPlayer.h"
#include "Macro.h"

void CPlayerActivityOpen::OnInit()
{
    m_tLastTick = 0;
}

void CPlayerActivityOpen::OnAfterRoleLogin()
{
    NotifyActivityOpenCfg();
}

void CPlayerActivityOpen::OnTick()
{
    if (IsDirty())
    {
        NotifyActivityOpenCfg();
    }

    if (CTime::GetCurSec() > m_tLastTick + 3)
    {
        NotifyActivityOpenCfg();
        m_tLastTick = CTime::GetCurSec();
    }
}

void CPlayerActivityOpen::OnZeroTime()
{
}

void CPlayerActivityOpen::NotifyActivityOpenCfg()
{
    auto pCfg = CConfigTable<Resource::ActivityOpenCfg_ARRAY>::Instance()->GetConfig();

    for (auto iter : pCfg->items())
    {
        if (IsActivityOpenOrDelay(iter))
        {
			SPDLOG_INFO("Now Open ActivityID:{}", iter.activityid());
        }
    }
}

bool CPlayerActivityOpen::IsActivityOpenOrDelay(const Resource::ActivityOpenCfg &ActivityConfig)
{
    if (ActivityConfig.openservertime() > 0)
    {
        if (CTime::GetCurSec() < ActivityConfig.openservertime())
        {
            return false;
        }
    }

    uint64_t tRoleCreateTime = m_pPlayer->GetRoleData()->createtime();
    int iCreateRoleDays = CTime::GetDiffDay(CTime::GetCurSec(), tRoleCreateTime);
    if (ActivityConfig.createroleday() > 0 && iCreateRoleDays <= ActivityConfig.createroleday())
    {
        return false;
    }

    bool bIsOpen = false;
    auto openParam = ActivityConfig.openparam();
    switch (ActivityConfig.opentype())
    {
    case ACTIVITY_OPEN_TYPE_FIXED:
    {
        if (openParam[0] > 0)
        {
            bIsOpen = true;
        }
    }
    break;
	case ACTIVITY_OPEN_TYPE_TIME:
	{
		if (CTime::GetCurSec() >= openParam[0] && CTime::GetCurSec() <= openParam[1])
		{
			bIsOpen = true;
		}
	}
	break;
	case ACTIVITY_OPEN_TYPE_SVR_OPENTIME:
	{
		if (openParam[0] > 0)
		{
			bIsOpen = true;
		}
	}
	break;
	case ACTIVITY_OPEN_TYPE_SVR_MERGETIME:
	{
		if (openParam[0] > 0)
		{
			bIsOpen = true;
		}
	}
	break;
	case ACTIVITY_OPEN_TYPE_FIX_DAILY_TIME:
	{
		if (CTime::GetHour(CTime::GetCurSec()) >= openParam[0] && 
			CTime::GetHour(CTime::GetCurSec()) <= openParam[1])
		{
			bIsOpen = true;
		}
	}
	break;
	case ACTIVITY_OPEN_TYPE_SVR_WEEK_DAY:
	{
		if (CTime::GetWDay(CTime::GetCurSec()) == openParam[0])
		{
			bIsOpen = true;
		}
	}
	break;
	case ACTIVITY_OPEN_TYPE_CREATE_ROLE_DAY:
	{
		if (iCreateRoleDays >= openParam[0] && iCreateRoleDays <= openParam[1])
		{
			bIsOpen = true;
		}
	}
	break;
    default:
        break;
    }
    return bIsOpen;
}