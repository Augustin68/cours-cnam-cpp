#include <iostream>
#include "rectangle.hpp"

int main () {
    std::cout << "COUCOU" << std::endl;

    Rectangle* rect = new Rectangle(1, 2);

    std::cout << rect->getPerimeter() << std::endl;

    return 0;
}