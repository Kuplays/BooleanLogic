#include "FullAdder.h"

/*
* Represents work of a full adder built with two
* half adders and an Or gate.
* sumAndCarry array is structured as:
* [0] bit holds the sum,
* [1] bit holds the carry from overflow;
* Returns sumAndCarry array of exactly two bits.
*/
bool* FullAdder::compute(bool aBit, bool bBit, bool carryIn)
{
    bool *firstPassResult = firstPass.compute(aBit, bBit);
    bool* secondPassResult = secondPass.compute(firstPassResult[0], carryIn);
    bool *sumAndCarry = new bool[2];
    sumAndCarry[0] = secondPassResult[0];
    sumAndCarry[1] = orGate.compute(secondPassResult[1], firstPassResult[1]);

    delete[] firstPassResult;
    delete[] secondPassResult;

    return sumAndCarry;
}
