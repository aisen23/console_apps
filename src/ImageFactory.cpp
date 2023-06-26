#include "ImageFactory.h"
#include "Heart/Heart.h"

CA::Image* CA::ImageFactory::Create(ImageType type) {
    Image* image = nullptr;

    if (type == ImageType::Heart)
        image = new Heart();

    return image;
}
