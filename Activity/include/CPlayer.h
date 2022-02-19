#pragma once

#include "PublicHeader.h"
#include "CPlayerCmpt.h"
#include "CPlayerActivityOpen.h"


class CPlayer
{
public:
    CPlayer();
    void Init();
    //************************************
    // Method:    InitPlayerCmpt
    // FullName:  CPlayer::InitPlayerCmpt
    // Access:    public 
    // Returns:   void
    // Qualifier:
    //************************************
    void InitPlayerCmpt();
    //************************************
    // Method:    GetRoleData
    // FullName:  CPlayer::GetRoleData
    // Access:    public 
    // Returns:   Player
    // Qualifier:
    //************************************
    Player* GetRoleData();

    //************************************
    // Method:    OnTick
    // FullName:  CPlayer::OnTick
    // Access:    public 
    // Returns:   void
    // Qualifier: 定时
    //************************************
    void OnTick();

    void OnAfterLogin();
protected:
    //************************************
    // Method:    AddCmpt
    // FullName:  CPlayer::AddCmpt
    // Access:    protected 
    // Returns:   bool
    // Qualifier: 添加功能模块
    // Parameter: CPlayerCmpt * pCmpt
    //************************************
    void AddCmpt(CPlayerCmpt* pCmpt);

private:
    CPlayerActivityOpen m_activityOpen;

private:
    CPlayerCmpt* m_cmptList[128];
    uint32_t m_cmptCnt;
    Player m_Player;
};