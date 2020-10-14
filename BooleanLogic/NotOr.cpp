#include "NotOr.h"

bool NotOr::compute(bool x1, bool x2)
{
    return notGate.compute(orGate.compute(x1, x2));
}
