#include "NotAnd.h"

bool NotAnd::compute(bool x1, bool x2)
{
    return notGate.compute(andGate.compute(x1, x2));
}
