#include <iostream>
#include "Adders\HalfAdder.h"
#include "Adders\FullAdder.h"


int main()
{
    FullAdder adder;
    bool* result = adder.compute(0, 0, 0);
    std::cout << result[0] << ", " << result[1] << std::endl;
    result = adder.compute(0, 0, 1);
    std::cout << result[0] << ", " << result[1] << std::endl;
    result = adder.compute(1, 1, 1);
    std::cout << result[0] << ", " << result[1] << std::endl;
    result = adder.compute(1, 1, 0);
    std::cout << result[0] << ", " << result[1] << std::endl;
}
