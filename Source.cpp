#include<iostream>
#include"Integral.h"
#include<math.h>
using namespace std;
/******************************************************************
* This program uses the trapezoid rule to approximate an integral.
*******************************************************************/
float f(float x)
{
	// input your function here
	return (pow(x,2)+2);
}

Integral prompt()
{
	float l, u, i = 0;
	cout << "What are your lower bounds? ";
	cin >> l;
	cout << "What are your upper bounds? ";
	cin >> u;
	cout << "How many intervals? ";
	cin >> i;
	Integral I (u,l,i);
	return I;
}

int main()
{
	Integral I = prompt();
	/************************************************************************
	* (dx/2) * [f(x0)+ 2f(x1)+ 2f(x3)....+ 2f(xn-1) + f(xn)]
	**************************************************************************/
	float count = 0;
	count += f(I.getLow()) + f(I.getUp());

	for (int i = 1; i < I.getIntv(); i++)
	{
		float j = (I.getdx() * i);
		count += (2 * f(j));
	}
	float value = count * (I.getdx() / 2);

	cout << "The approximation of the integral is equal to " << value << endl;
	return 0;
}