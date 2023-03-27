#include <iostream>

#include "BitmapImage.h"
#include "Version.h"

int main() {
    std::cout << "Version : " << version << std::endl;
    std::cout << "Image viewer" << std::endl;
    BitmapImage b;
    std::string imgName = "test.png";
    if (b.load(imgName))
        std::cout << "show image: " << imgName << std::endl;
    else
        std::cerr << "image:" << imgName << " not readable." << std::endl;
    return 0;
}