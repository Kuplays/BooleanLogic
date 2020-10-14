#pragma once
#include "And.h"
#include "Or.h"

class AndOr
{
private:
	And andGateLeft, andGateRight;
	Or orGate;
public:
	bool compute(bool x1, bool x2, bool x3, bool x4);
};

