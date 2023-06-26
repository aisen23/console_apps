#pragma once

#include "Image.h"

namespace CA
{
    class ImageFactory
    {
    public:
        static Image* Create(ImageType type);
    };
}
