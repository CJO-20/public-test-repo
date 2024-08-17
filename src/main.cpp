#include <iostream>

#include "test.hpp"

int main (const int argc, const char * argv[])
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << test_func(3, 4) << std::endl;
    return 0;
}
