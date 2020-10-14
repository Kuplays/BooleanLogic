#include <iostream>
#include "Not.h"
#include "And.h"
#include "Or.h"
#include "NotAnd.h"
#include "NotOr.h"
#include "AndOr.h"
#include "Xor.h"


int main()
{
    Xor test;
    std::cout << test.compute(0, 0) << std::endl;
    std::cout << test.compute(0, 1) << std::endl;
    std::cout << test.compute(1, 0) << std::endl;
    std::cout << test.compute(1, 1) << std::endl;
}
