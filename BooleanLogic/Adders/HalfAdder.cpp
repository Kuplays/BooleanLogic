#include "HalfAdder.h"

/*
* Represents work of a half adder with a carry bit.
* sumAndCarry array is structured as:
* [0] bit holds the sum,
* [1] bit holds the carry from overflow;
* Returns sumAndCarry array of exactly two bits.
*/
bool* HalfAdder::compute(bool aBit, bool bBit)
{
    bool* sumAndCarry = new bool[2];
    sumAndCarry[0] = xorGate.compute(aBit, bBit);
    sumAndCarry[1] = andGate.compute(aBit, bBit);

    return sumAndCarry;
}
