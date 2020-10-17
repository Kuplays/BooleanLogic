#pragma once
#include "HalfAdder.h"
#include "FullAdder.h"

class Summator4BitFull
{
private:
	HalfAdder lsbHalfAdder;
	FullAdder fullAdders[3];
public:
	bool* compute(const bool a[], const bool b[]);
};

