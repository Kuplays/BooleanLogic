#include "NotAndOr.h"

bool NotAndOr::compute(bool x1, bool x2, bool x3, bool x4)
{
    return notGate.compute(andOrGate.compute(x1, x2, x3, x4));
}