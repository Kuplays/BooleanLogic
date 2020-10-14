#pragma once
#include "Not.h"
#include "And.h"
#include "Or.h"

class Xor
{
private:
	Not notGateX1, notGateX2;
	And leftHandSide, rightHandSide;
	Or orGate;
public:
	bool compute(bool x1, bool x2);
};

