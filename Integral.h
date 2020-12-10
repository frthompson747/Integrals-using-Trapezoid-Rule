#ifndef INTEGRAL_H
#define INTEGRAL_H

class Integral
{
private:
	float upperBounds;
	float lowerBounds;
	float interval;
	double dx;
public:
	Integral() {}
	Integral(float upper, float lower, float interval);

	double getdx() { return dx; }
	float getUp() { return upperBounds; }
	float getLow() { return lowerBounds; }
	float getIntv() { return interval; }

};
#endif
