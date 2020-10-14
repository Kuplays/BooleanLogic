#include "AndOr.h"

bool AndOr::compute(bool x1, bool x2, bool x3, bool x4)
{
    return orGate.compute(andGateLeft.compute(x1, x2), andGateRight.compute(x3, x4));
}
