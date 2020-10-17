#include <iostream>
#include "Adders\HalfAdder.h"
#include "Adders\FullAdder.h"
#include "Adders\Summator4BitFull.h"


int main()
{
    bool A[4], B[4];
    // A = 5
    A[0] = 0;
    A[1] = 1;
    A[2] = 0;
    A[3] = 1;
    //B = 9
    B[0] = 1;
    B[1] = 0;
    B[2] = 0;
    B[3] = 1;

    Summator4BitFull summator;
    bool* C = summator.compute(A, B); //C = 14

    for (int i = 0; i < 4; i++)
        std::cout << C[i];
    std::cout << "\n";
}
