#include "FPS.h"
#include "Timer.h"

#include <thread>
#include <iostream>

CA::FPS::FPS() {
    _timer = std::make_unique<Timer>();
}

CA::FPS::FPS(int fps, bool display)
: _fps(fps),
_display(display) {
   _timer = std::make_unique<Timer>(); 
}

CA::FPS::~FPS() {
}

void CA::FPS::Update() {
    if (_timer)
        _timer->Reset();
}

void CA::FPS::TryPause() {
    if (!_timer)
        return;
    
    auto frameDuration = std::chrono::microseconds(1000000 / _fps);
    auto duration = _timer->GetDuration();

    if (duration < frameDuration) {
        std::this_thread::sleep_for(frameDuration - duration);
    }

    if (_display) {
        _fpsToDisplay = 1000000 / _timer->GetDuration().count();
    }
}
    
void CA::FPS::Display() const {
    if (_display)
        std::cout << "\n" << "FPS: " << _fpsToDisplay << '\n';
}
