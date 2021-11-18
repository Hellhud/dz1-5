#include <iostream>

int main() {
	extern int a, b, c, d;
	a = 10;
	b = 30;
	c = 50;
	d = 100;
	extern float r,n;
	r = static_cast <float> (c) / d;
	std::cout << r << std::endl;
	n = a * (b + r);
	std::cout << n;
}