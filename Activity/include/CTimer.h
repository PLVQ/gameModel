#pragma once

#include <chrono>
#include <future>
#include <condition_variable>
#include <mutex>

#include "PublicHeader.h"

class CTimer
{
public:
    CTimer();
    CTimer(const CTimer& timer) = delete;

    ~CTimer();
    
    void start(uint64_t tInterval, std::function<void()> task);
    void stop();

private:
    std::mutex m_mutex;
    bool m_stop{ true };
    std::condition_variable m_cv;
    std::future<void> m_futrue;
 };