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

        void Update();

    protected:
        void DoDisplay() const override;

    private:
        bool _isScaled = false;

        std::string _common;
        std::string _scaled;

        std::unique_ptr<Timer> _timer;
    };
}
