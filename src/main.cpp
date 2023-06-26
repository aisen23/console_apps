#include "Timer.h"
#include "FPS.h"

#include <string>
#include <vector>

int main() 
{
    CA::FPS fpsController(90, true);
    while (true) {
        fpsController.Update();

        std::vector<std::string> strings;
        for (int i = 0; i != 300; ++i) {
            strings.push_back("Hello " + std::to_string(i));
        }

        fpsController.TryPause();
    }

    return 0;
}
