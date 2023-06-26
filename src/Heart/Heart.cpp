#include "Heart.h"
#include "Timer.h"

#include <iostream>

CA::Heart::Heart() {
    _common =   "        #####     ####       \n"
                "       #     ##  #    ##     \n"
                "      #   #    # #      #    \n"
                "      #   #     #       #    \n"
                "      #                 #    \n"
                "      #                #     \n"
                "       #              #      \n"
                "        #            #       \n"
                "         #          #        \n"
                "          ##       #         \n"
                "            ##   ##          \n"
                "              ###            \n";

    _scaled =   "                             \n"
                "        ####     ###         \n"
                "       #    ##  #   ##       \n"
                "      #  #    ##     #       \n"
                "      #  #    #      #       \n"
                "      #              #       \n"
                "       #            #        \n"
                "        #          #         \n"
                "         #        #          \n"
                "          ##   ###           \n"
                "            ###              \n"
                "                             \n";

    _timer = std::make_unique<Timer>();
}

void CA::Heart::Display() const {
    CA::Image::Display();

    const std::string& data = (_isScaled ? _scaled : _common);

    std::cout << data;
}

void CA::Heart::Update() {
    if (!_timer)
        return;

    auto duration = _timer->GetDuration();
    int iDur = duration.count() / 1000;
    int scaleBegin = 700;
    int scaleEnd = 900;

    _isScaled = (iDur > scaleBegin);
    if (iDur > scaleEnd)
        _timer->Reset();
}
