#include "HelloWorld.hpp"
#include <iostream>

HelloWorld::HelloWorld()
{
    std::cout << "Hello World" << std::endl;
}

HelloWorld::~HelloWorld()
{
    std::cout << "Goodbye World" << std::endl;
}
