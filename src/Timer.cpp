#include "Timer.h"

#include <iostream>

CA::Timer::Timer() {
    _start = std::chrono::system_clock::now();
}

CA::Timer::Timer(bool debug)
: _debug(debug) {
    _start = std::chrono::system_clock::now();
}

CA::Timer::~Timer() {
    if (_debug) {
        auto end = std::chrono::system_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - _start);
        std::cout << "Duration: " << duration.count() << " microseconds." << '\n';
    }
}

std::chrono::microseconds CA::Timer::GetDuration() const {
    auto now = std::chrono::system_clock::now();
    return std::chrono::duration_cast<std::chrono::microseconds>(now - _start);
}

void CA::Timer::Reset() {
    _start = std::chrono::system_clock::now();
}
