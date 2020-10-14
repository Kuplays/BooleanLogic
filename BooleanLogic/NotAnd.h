#pragma once
#include "And.h"
#include "Not.h"

class NotAnd
{
private:
	And andGate;
	Not notGate;
public:
	bool compute(bool x1, bool x2);
};

