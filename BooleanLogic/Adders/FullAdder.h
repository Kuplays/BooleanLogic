#pragma once
#include "HalfAdder.h"
#include "../Or.h"

class FullAdder
{
private:
	Or orGate;
	HalfAdder firstPass, secondPass;
public:
	bool* compute(bool aBit, bool bBit, bool carryIn);
};

