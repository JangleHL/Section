#include "Image.h"

void printImageMetaData(Image& image) 
{
    std::cout << "Image Name: " << image.getFileName() << std::endl;
    std::cout << "Image type: " << image.getImageType() << std::endl;
    std::cout << "Date Created: " << image.getDateCreated() << std::endl;
    std::cout << "Image size(MB): " << image.getSize() << std::endl;
    std::cout << "Author Name: " << image.getAuthorName() << std::endl;
    std::cout << "Dimensions value: " << image.getImageDimension();
    std::cout << "Aperture value: " << image.getAperture();
    std::cout << "Exposure value: " << image.getExposure();
    std::cout << "ISO value: " << image.getIsoValue() << std::endl;
    std::cout << "Flash enabled: ";
    if(image.isFlashEnabled()) 
    {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
}

int main()
 {
    Image image("DALAT_image", "JPEG", "02-01-2018", 10.2, "TA", 1980, 1024, 24, 55, 2400, true);
    printImageMetaData(image);
    return 0;
}