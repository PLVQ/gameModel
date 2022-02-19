#pragma once

#include "PublicHeader.h"
#include "CPlayerDirty.h"

class CPlayer;
class CPlayerCmpt : public CPlayerDirty
{
public:
    //************************************
    // Method:    OnInit
    // FullName:  CPlayerCmpt::OnInit
    // Access:    virtual public
    // Returns:   void
    // Qualifier: 初始化
    //************************************
    virtual void OnInit();
    //************************************
    // Method:    OnResume
    // FullName:  CPlayerCmpt::OnResume
    // Access:    virtual public
    // Returns:   void
    // Qualifier: 重置
    //************************************
    virtual void OnResume();
    //************************************
    // Method:    OnFree
    // FullName:  CPlayerCmpt::OnFree
    // Access:    virtual public
    // Returns:   void
    // Qualifier: 释放
    //************************************
    virtual void OnFree();

    //************************************
    // Method:    OnTick
    // FullName:  CPlayerCmpt::OnTick
    // Access:    virtual public
    // Returns:   void
    // Qualifier: 定时
    //************************************
    virtual void OnTick();
    //************************************
    // Method:    OnInitCreateRole
    // FullName:  CPlayerCmpt::OnInitCreateRole
    // Access:    virtual public
    // Returns:   void
    // Qualifier: 初始化创角数据
    //************************************
    virtual void OnInitCreateRole();
    //************************************
    // Method:    OnPreRoleLogin
    // FullName:  CPlayerCmpt::OnPreRoleLogin
    // Access:    virtual public
    // Returns:   void
    // Qualifier: 登录前处理
    //************************************
    virtual void OnPreRoleLogin();

    //************************************
    // Method:    OnAfterRoleLogin
    // FullName:  CPlayerCmpt::OnAfterRoleLogin
    // Access:    public
    // Returns:   void
    // Qualifier: 登录后处理
    //************************************
    virtual void OnAfterRoleLogin();
    //************************************
    // Method:    OnZeroTime
    // FullName:  CPlayerCmpt::OnZeroTime
    // Access:    public
    // Returns:   void
    // Qualifier: 每日0点重置
    //************************************
    virtual void OnZeroTime();
    //************************************
    // Method:    OnDailyReset
    // FullName:  CPlayerCmpt::OnDailyReset
    // Access:    virtual public
    // Returns:   void
    // Qualifier: 每日重置
    //************************************
    virtual void OnDailyReset();
    //************************************
    // Method:    OnWeekReset
    // FullName:  CPlayerCmpt::OnWeekReset
    // Access:    public
    // Returns:   void
    // Qualifier: 每周重置
    //************************************
    virtual void OnWeekReset();
    //************************************
    // Method:    OnRoleLogout
    // FullName:  CPlayerCmpt::OnRoleLogout
    // Access:    public
    // Returns:   void
    // Qualifier: 登出时处理
    //************************************
    virtual void OnRoleLogout();
    //************************************
    // Method:    OnRoleReconnect
    // FullName:  CPlayerCmpt::OnRoleReconnect
    // Access:    public
    // Returns:   void
    // Qualifier: 重连时处理
    //************************************
    virtual void OnRoleReconnect();
    //************************************
    // Method:    OnRoleLevelUp
    // FullName:  CPlayerCmpt::OnRoleLevelUp
    // Access:    public
    // Returns:   void
    // Qualifier: 玩家等级变化
    // Parameter: uint32_t iOldLevel
    //************************************
    virtual void OnRoleLevelUp(uint32_t iOldLevel);
    //************************************
    // Method:    OnPackRoleData
    // FullName:  CPlayerCmpt::OnPackRoleData
    // Access:    public
    // Returns:   void
    // Qualifier: 打包玩家数据
    // Parameter: Player & stPlayer
    // Parameter: bool bFullData
    //************************************
    virtual void OnPackRoleData(Player &stPlayer, bool bFullData = true);

public:
    //************************************
    // Method:    Init
    // FullName:  CPlayerCmpt::Init
    // Access:    public
    // Returns:   void
    // Qualifier: 初始化
    // Parameter: CPlayer * pPlayer
    //************************************
    void Init(CPlayer *pPlayer);
    //************************************
    // Method:    Resume
    // FullName:  CPlayerCmpt::Resume
    // Access:    virtual public
    // Returns:   void
    // Qualifier: 重置
    // Parameter: CPlayer * pPlayer
    //************************************
    void Resume(CPlayer *pPlayer);
    //************************************
    // Method:    Tick
    // FullName:  CPlayerCmpt::Tick
    // Access:    virtual public
    // Returns:   void
    // Qualifier: 定时
    //************************************
    void Tick();
    //************************************
    // Method:    Free
    // FullName:  CPlayerCmpt::Free
    // Access:    public
    // Returns:   void
    // Qualifier: 释放
    //************************************
    void Free();

protected:
    CPlayer *m_pPlayer;

private:
};