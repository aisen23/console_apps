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
        void Display() const;

    private:
        int _fps = 90;
        int _fpsToDisplay = 90;

        bool _display = false;
        std::unique_ptr<Timer> _timer;
    };
}
