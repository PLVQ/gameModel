#include "CPlayer.h"

CPlayer::CPlayer()
{
	InitPlayerCmpt();
	Init();
}

void CPlayer::Init()
{
	for (int i = 0; i < m_cmptCnt && i < 128; ++i)
	{
		m_cmptList[i]->Init(this);
	}
}

void CPlayer::InitPlayerCmpt()
{
	m_cmptCnt = 0;
	AddCmpt(&m_activityOpen);
}

Player* CPlayer::GetRoleData()
{
	return &m_Player;
}

void CPlayer::OnTick()
{
	for (int i = 0; i < m_cmptCnt && i < 128; ++i)
	{
		m_cmptList[i]->OnTick();
	}
}

void CPlayer::OnAfterLogin()
{
	for (int i = 0; i < m_cmptCnt && i < 128; ++i)
	{
		m_cmptList[i]->OnAfterRoleLogin();
	}
}

void CPlayer::AddCmpt(CPlayerCmpt* pCmpt)
{
	if (m_cmptCnt < 128)
	{
		m_cmptList[m_cmptCnt++] = pCmpt;
	}
}

