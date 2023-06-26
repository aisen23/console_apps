#pragma once

#include "Image.h"

#include <string>
#include <memory>

namespace CA
{
    class Timer;

    class Heart : public Image
    {
    public:
        Heart();

        void Display() const;
        void Update();

    private:
        bool _isScaled = false;

        std::string _common;
        std::string _scaled;

        std::unique_ptr<Timer> _timer;
    };
}
