#include "Xor.h"

bool Xor::compute(bool x1, bool x2)
{
    bool andLeftSide = leftHandSide.compute(notGateX1.compute(x1), x2);
    bool andRightSide = rightHandSide.compute(x1, notGateX2.compute(x2));

    return orGate.compute(andLeftSide, andRightSide);
}
