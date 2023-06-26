#include "Image.h"

#include <iostream>

void CA::Image::Display() const {
    Flush();
}

void CA::Image::Flush() const {
    std::cout << "\033c";
    std::cout.flush();
}
