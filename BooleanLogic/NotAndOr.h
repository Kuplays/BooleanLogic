#pragma once
#include "AndOr.h"
#include "Not.h"

class NotAndOr
{
private:
	AndOr andOrGate;
	Not notGate;
public:
	bool compute(bool x1, bool x2, bool x3, bool x4);
};

