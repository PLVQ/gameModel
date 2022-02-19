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
    // Qualifier: ��ʼ��
    //************************************
    virtual void OnInit();
    //************************************
    // Method:    OnResume
    // FullName:  CPlayerCmpt::OnResume
    // Access:    virtual public
    // Returns:   void
    // Qualifier: ����
    //************************************
    virtual void OnResume();
    //************************************
    // Method:    OnFree
    // FullName:  CPlayerCmpt::OnFree
    // Access:    virtual public
    // Returns:   void
    // Qualifier: �ͷ�
    //************************************
    virtual void OnFree();

    //************************************
    // Method:    OnTick
    // FullName:  CPlayerCmpt::OnTick
    // Access:    virtual public
    // Returns:   void
    // Qualifier: ��ʱ
    //************************************
    virtual void OnTick();
    //************************************
    // Method:    OnInitCreateRole
    // FullName:  CPlayerCmpt::OnInitCreateRole
    // Access:    virtual public
    // Returns:   void
    // Qualifier: ��ʼ����������
    //************************************
    virtual void OnInitCreateRole();
    //************************************
    // Method:    OnPreRoleLogin
    // FullName:  CPlayerCmpt::OnPreRoleLogin
    // Access:    virtual public
    // Returns:   void
    // Qualifier: ��¼ǰ����
    //************************************
    virtual void OnPreRoleLogin();

    //************************************
    // Method:    OnAfterRoleLogin
    // FullName:  CPlayerCmpt::OnAfterRoleLogin
    // Access:    public
    // Returns:   void
    // Qualifier: ��¼����
    //************************************
    virtual void OnAfterRoleLogin();
    //************************************
    // Method:    OnZeroTime
    // FullName:  CPlayerCmpt::OnZeroTime
    // Access:    public
    // Returns:   void
    // Qualifier: ÿ��0������
    //************************************
    virtual void OnZeroTime();
    //************************************
    // Method:    OnDailyReset
    // FullName:  CPlayerCmpt::OnDailyReset
    // Access:    virtual public
    // Returns:   void
    // Qualifier: ÿ������
    //************************************
    virtual void OnDailyReset();
    //************************************
    // Method:    OnWeekReset
    // FullName:  CPlayerCmpt::OnWeekReset
    // Access:    public
    // Returns:   void
    // Qualifier: ÿ������
    //************************************
    virtual void OnWeekReset();
    //************************************
    // Method:    OnRoleLogout
    // FullName:  CPlayerCmpt::OnRoleLogout
    // Access:    public
    // Returns:   void
    // Qualifier: �ǳ�ʱ����
    //************************************
    virtual void OnRoleLogout();
    //************************************
    // Method:    OnRoleReconnect
    // FullName:  CPlayerCmpt::OnRoleReconnect
    // Access:    public
    // Returns:   void
    // Qualifier: ����ʱ����
    //************************************
    virtual void OnRoleReconnect();
    //************************************
    // Method:    OnRoleLevelUp
    // FullName:  CPlayerCmpt::OnRoleLevelUp
    // Access:    public
    // Returns:   void
    // Qualifier: ��ҵȼ��仯
    // Parameter: uint32_t iOldLevel
    //************************************
    virtual void OnRoleLevelUp(uint32_t iOldLevel);
    //************************************
    // Method:    OnPackRoleData
    // FullName:  CPlayerCmpt::OnPackRoleData
    // Access:    public
    // Returns:   void
    // Qualifier: ����������
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
    // Qualifier: ��ʼ��
    // Parameter: CPlayer * pPlayer
    //************************************
    void Init(CPlayer *pPlayer);
    //************************************
    // Method:    Resume
    // FullName:  CPlayerCmpt::Resume
    // Access:    virtual public
    // Returns:   void
    // Qualifier: ����
    // Parameter: CPlayer * pPlayer
    //************************************
    void Resume(CPlayer *pPlayer);
    //************************************
    // Method:    Tick
    // FullName:  CPlayerCmpt::Tick
    // Access:    virtual public
    // Returns:   void
    // Qualifier: ��ʱ
    //************************************
    void Tick();
    //************************************
    // Method:    Free
    // FullName:  CPlayerCmpt::Free
    // Access:    public
    // Returns:   void
    // Qualifier: �ͷ�
    //************************************
    void Free();

protected:
    CPlayer *m_pPlayer;

private:
};