#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <chrono>
#include <ctime>

#include "CSingleton.h"

using namespace std::chrono;

class CTime : public CSingleton<CTime>
{
public:
	CTime();
	~CTime();
	// 获取当前时区与标准时区的便宜时间戳
	static time_t GetUTCAndLocalDiffSec();
	// 获取当前时间(微秒)
	static time_t GetCurMicrSec();
	// 获取当前时间(毫秒)
	static time_t GetCurMillSec();
	// 获取当前时间(秒)
	static time_t GetCurSec();
	/*
		brief:获取特定时间
		param tTime 时间戳(秒)
	*/
	static int GetMin(time_t tTime);
	static int GetHour(time_t tTime);
	static int GetWDay(time_t tTime);
	static int GetMDay(time_t tTime);
	static int GetYDay(time_t tTime);
	static int GetMonth(time_t tTime);
	static int GetYear(time_t tTime);
	/*
		brief:比较时间
	*/
	static int GetDiffHour(time_t tTime1, time_t tTime2);
	static int GetDiffDay(time_t tTime1, time_t tTime2, int tSecOffset = 0);
	static int GetDiffWeek(time_t tTime1, time_t tTime2, int tSecOffset = 0);

	static bool IsSameHour(time_t tTime1, time_t tTime2, time_t tSecOffset = 0);
	static bool IsSameDay(time_t tTime1, time_t tTime2, time_t tSecOffset = 0);
	static bool IsSameWeek(time_t tTime1, time_t tTime2, time_t tSecOffset = 0);
	static bool IsSameMonth(time_t tTime1, time_t tTime2, time_t tSecOffset = 0);
	static bool IsSameYear(time_t tTime1, time_t tTime2, time_t tSecOffset = 0);

public:
	const static int m_tSecOfDay = 86400;
	const static int m_tSecOfHour = 3600;
	const static int m_tSecOfMin = 60;
};
