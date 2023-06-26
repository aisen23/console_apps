#include "FPS.h"
#include "Image.h"
#include "ImageFactory.h"

#include <iostream>

int main() 
{
    auto imageType = CA::ImageType::Heart;
    CA::Image* image = CA::ImageFactory::Create(imageType);

    CA::FPS fpsController(140, true);
    while (image) {
        fpsController.Update();

        image->Display();
        image->Update();
        
        std::cout << "\n\n" << "NOTE: Press ctrl+c to stop the application" << '\n';
        fpsController.Display();

        fpsController.TryPause();
    }

    delete image;

    return 0;
}
