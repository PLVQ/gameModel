#pragma once

class CPlayerDirty
{
public:
    virtual bool IsDirty() { return m_bDirty; }
    virtual void MarkDirty() { m_bDirty = true; }
    virtual void ClearDirty() { m_bDirty = false; }
    virtual bool OnDirty()
    {
        return true;
    }

protected:
private:
    bool m_bDirty;
};