#include "Integral.h"

Integral::Integral(float upper, float lower, float interval)
{
	this->lowerBounds = lower;
	this->upperBounds = upper;
	this->interval = interval;
	this->dx = ((upper - lower) / interval);
}