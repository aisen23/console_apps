#pragma once

#include <chrono>

namespace CA
{
    class Timer
    {
    public:
        Timer();
        explicit Timer(bool debug);
        ~Timer();

        std::chrono::microseconds GetDuration() const;
        void Reset();

    private:
        std::chrono::time_point<std::chrono::system_clock> _start;

        bool _debug = false;
    };
}
