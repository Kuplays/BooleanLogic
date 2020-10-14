#pragma once
#include "Not.h"
#include "Or.h"

class NotOr
{
private:
	Not notGate;
	Or orGate;
public:
	bool compute(bool x1, bool x2);
};

