// C++ Program to find square
// root of a number
#include <bits/stdc++.h>
using namespace std;

double findSqrt(double x)
{
	// for 0 and 1, the square roots are themselves
	if (x < 2)
		return x;

	// considering the equation values
	double y = x;
	double z = (y + (x / y)) / 2;

	while (abs(y - z) >= 0.00001) {
		y = z;
		z = (y + (x / y)) / 2;
	}
	return z;
}

int main()
{

	double n = 4;

	double ans = findSqrt(n);
	cout << setprecision(6) << ans
		<< " is the square root of " << n<< endl;
	return 0;
}
