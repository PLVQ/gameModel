#pragma once

template <class T>
class CSingleton
{
public:
    static T *Instance()
    {
        static T s_instance;
        return &s_instance;
    }
};