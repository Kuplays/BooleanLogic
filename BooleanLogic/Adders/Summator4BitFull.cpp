#include "Summator4BitFull.h"

bool* Summator4BitFull::compute(const bool a[], const bool b[])
{
    bool *result = new bool[4];
    for (int i = 0; i < 4; i++)
        result[i] = 0;

    bool* halfAdderResult = lsbHalfAdder.compute(a[3], b[3]);
    result[3] = halfAdderResult[0];
    bool carry = halfAdderResult[1];

    for (int i = 2; i >= 0; i--) {
        bool* tempBitAddtition = fullAdders[i].compute(a[i], b[i], carry);
        result[i] = tempBitAddtition[0];
        carry = tempBitAddtition[1];

        delete[] tempBitAddtition;
    }

    delete[] halfAdderResult;

    return result;
}
