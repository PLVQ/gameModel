#include "PublicHeader.h"
#include "CConfigTableMgr.h"
#include "CConfigTable.h"
#include "ActivityOpenConfig.pb.h"
#include "CPlayer.h"
#include "CTime.h"
#include <chrono>
#include <string>

int main()
{
	SPDLOG_INFO(CTime::GetHour(CTime::GetCurSec()));
	SPDLOG_INFO(CTime::GetWDay(CTime::GetCurSec()));
	CConfigTableMgr::Instance()->Init();

	CPlayer* pPlayer = new CPlayer;
	pPlayer->InitPlayerCmpt();
	pPlayer->Init();
	pPlayer->OnAfterLogin();
	delete pPlayer;
	SPDLOG_INFO("hello world");
    return 0;
}