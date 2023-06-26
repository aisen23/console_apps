#pragma once

#include <memory>

namespace CA
{
    class Timer;

    class FPS
    {
    public:
        FPS();
        FPS(int fps, bool display = false);
        ~FPS();
        
        void Update();
        void TryPause();

    private:
        int _fps = 90;

        bool _display = false;
        std::unique_ptr<Timer> _timer;
    };
}
