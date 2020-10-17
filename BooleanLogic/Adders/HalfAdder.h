#pragma once
#include "../Xor.h"
#include "../And.h"

class HalfAdder
{
private:
	Xor xorGate;
	And andGate;
public:
	bool* compute(bool aBit, bool bBit);
};

