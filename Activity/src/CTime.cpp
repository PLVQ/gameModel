#include "CTime.h"

CTime::CTime()
{
}

CTime::~CTime()
{
}

time_t CTime::GetUTCAndLocalDiffSec()
{
	time_t tSecondDay = m_tSecOfDay;
	struct tm *pTm = localtime(&tSecondDay);

	if (!pTm)
	{
		return 0;
	}

	time_t tDiffSec = (pTm->tm_mday - 2) * m_tSecOfDay + pTm->tm_hour * m_tSecOfHour;
	return tDiffSec;
}

time_t CTime::GetCurMicrSec()
{
	return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}

time_t CTime::GetCurMillSec()
{
	return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}

time_t CTime::GetCurSec()
{
	return std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
}

int CTime::GetMin(time_t tTime)
{
	tm *pTm = localtime(&tTime);

	return pTm->tm_min;
}

int CTime::GetHour(time_t tTime)
{
	tm *pTm = localtime(&tTime);

	return pTm->tm_hour;
}

int CTime::GetWDay(time_t tTime)
{
	tm *pTm = localtime(&tTime);

	return pTm->tm_wday;
}

int CTime::GetMDay(time_t tTime)
{
	tm *pTm = localtime(&tTime);

	return pTm->tm_mday;
}

int CTime::GetYDay(time_t tTime)
{
	tm *pTm = localtime(&tTime);

	return 1 + pTm->tm_yday;
}

int CTime::GetMonth(time_t tTime)
{
	tm *pTm = localtime(&tTime);

	return 1 + pTm->tm_mon;
}

int CTime::GetYear(time_t tTime)
{
	tm *pTm = localtime(&tTime);

	return 1900 + pTm->tm_year;
}

int CTime::GetDiffHour(time_t tTime1, time_t tTime2)
{
	time_t iHour1 = tTime1 / m_tSecOfHour;
	time_t iHour2 = tTime2 / m_tSecOfHour;

	time_t iDiffHour = (iHour1 - iHour2 >= 0) ? iHour1 - iHour2 : iHour2 - iHour1;
	return int(iDiffHour);
}

int CTime::GetDiffDay(time_t tTime1, time_t tTime2, int tSecOffset /*= 0*/)
{
	time_t tMin = (tTime1 < tTime2) ? tTime1 : tTime2;
	time_t tMax = (tTime1 < tTime2) ? tTime2 : tTime1;

	tMin += GetUTCAndLocalDiffSec();
	tMax += GetUTCAndLocalDiffSec();

	tMin -= tSecOffset;
	tMax -= tSecOffset;

	tMin -= tMin % m_tSecOfDay;

	return int((tMax - tMin) / m_tSecOfDay);
}

int CTime::GetDiffWeek(time_t tTime1, time_t tTime2, int tSecOffset /*= 0*/)
{
	time_t iMin = (tTime1 < tTime2) ? tTime1 : tTime2;
	time_t iMax = (tTime1 < tTime2) ? tTime2 : tTime1;

	iMin += (4 * m_tSecOfDay + GetUTCAndLocalDiffSec());
	iMax += (4 * m_tSecOfDay + GetUTCAndLocalDiffSec());

	iMin = iMin - 0 * m_tSecOfDay - tSecOffset;
	iMax = iMax - 0 * m_tSecOfDay - tSecOffset;

	iMin = iMin - (iMin % (7 * m_tSecOfDay));

	return int((iMax - iMin) / (7 * m_tSecOfDay));
}

bool CTime::IsSameHour(time_t tTime1, time_t tTime2, time_t tSecOffset /*= 0*/)
{
	return GetDiffHour(tTime1, tTime2) == 0;
}

bool CTime::IsSameDay(time_t tTime1, time_t tTime2, time_t tSecOffset /*= 0*/)
{

	return GetDiffDay(tTime1, tTime2) == 0;
}

bool CTime::IsSameWeek(time_t tTime1, time_t tTime2, time_t tSecOffset /*= 0*/)
{

	return GetDiffWeek(tTime1, tTime2) == 0;
}

bool CTime::IsSameMonth(time_t tTime1, time_t tTime2, time_t tSecOffset /*= 0*/)
{
	bool bSameYear = GetYear(tTime1) == GetYear(tTime2);
	bool bSameMonth = GetMonth(tTime1) == GetMonth(tTime2);
	return bSameYear && bSameMonth;
}

bool CTime::IsSameYear(time_t tTime1, time_t tTime2, time_t tSecOffset /*= 0*/)
{

	return GetYear(tTime1) == GetYear(tTime2);
}
