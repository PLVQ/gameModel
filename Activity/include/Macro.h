#pragma once
/* ActivityOpenType*/
enum ActivityOpenType
{
	ACTIVITY_OPEN_TYPE_FIXED = 1,           /* 固定开启，类似七日签到 */
	ACTIVITY_OPEN_TYPE_TIME = 2,            /* 指定时间开启 */
	ACTIVITY_OPEN_TYPE_SVR_OPENTIME = 3,    /* 开服时间 */
	ACTIVITY_OPEN_TYPE_SVR_MERGETIME = 4,   /* 合服时间 */
	ACTIVITY_OPEN_TYPE_FIX_DAILY_TIME = 5,  /* 每日固定时间 */
	ACTIVITY_OPEN_TYPE_SVR_WEEK_DAY = 6,    /* 每周固定时间 */
	ACTIVITY_OPEN_TYPE_CREATE_ROLE_DAY = 7, /* 创角天数 */
};
