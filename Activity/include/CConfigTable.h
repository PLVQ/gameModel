#pragma once
#include <fstream>
#include <string>
#include <map>
#include "CSingleton.h"
#include "spdlog/spdlog.h"


template <class T>
class CConfigTable : public CSingleton<CConfigTable<T>>
{
public:
	CConfigTable() :m_filePath(PROJECT_SOURCE_DIR) { m_config = new T; }
	~CConfigTable() { delete m_config; }
	int LoadBin(std::string pFile);
	T* GetConfig();

private:
	std::string m_filePath;
	//std::map<
	T* m_config;
};

template <class T>
int CConfigTable<T>::LoadBin(std::string pFile)
{
	std::string fileName = m_filePath + "/Resource/bin/" + pFile;
	std::ifstream in(fileName.c_str(), std::ios::binary);
	if (!in.is_open())
	{
		SPDLOG_ERROR("read bin failed name:{}", fileName);
		return -1;
	}
	if (!m_config->ParseFromIstream(&in))
	{
		SPDLOG_ERROR("Init {} failed!", fileName);
		return -1;
	}
	SPDLOG_ERROR("Init {} Succ!", fileName);
	return 0;
}

template <class T>
T* CConfigTable<T>::GetConfig()
{
	return m_config;
}