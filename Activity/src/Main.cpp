#include "PublicHeader.h"
#include "CConfigTableMgr.h"
#include "CConfigTable.h"
#include "ActivityOpenConfig.pb.h"
#include "CPlayer.h"
#include "CTime.h"
#include <chrono>
#include <string>

std::string UTF8ToANSI(const char *str)
{
	std::string res;
	wchar_t *src;//宽字符类型 
	LPSTR lpres;//LPSTR被定义成是一个指向以NULL(‘\0’)结尾的32位ANSI字符数组指针 
	//执行转换的多字节字符所使用的字符集为UTF8，0表示不使用位标记，待转换的字符串为str，
	// 设置-1会自动判断待转换字符串的长度 ，被转换字符串的缓冲区，0表示函数不执行转换
	//函数执行成功返回待转换字符串的缓冲区所需求的宽字符数大小 
	int tmp = MultiByteToWideChar(CP_UTF8, 0, str, -1, NULL, 0);
	src=new wchar_t[tmp+5];
	//函数执行成功返回向缓冲区中写入的宽字符数
	MultiByteToWideChar(CP_UTF8, 0, str, -1, src, tmp);
	//ANSI编码，。。。，后两个参数可以忽略掉，就用NULL就好 
	tmp = WideCharToMultiByte(CP_ACP, 0, src, -1, NULL, 0, NULL, NULL);
	lpres=new char[tmp+5];
	WideCharToMultiByte(CP_ACP, 0, src, -1, lpres, tmp, NULL, NULL);
	res=lpres;
	delete []src;
	delete []lpres;
	return res;
}

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