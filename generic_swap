#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
};

template<class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 4, b = 5;
	myswap(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	double c = 0.3, d = 2.5;
	myswap(a, b);
	cout << "c = " << c << ", d = " << d << endl;

	Circle first(4), second(8);
	myswap(a, b);
	cout << "first radius = " << first.getRadius() << ", ";
	cout << "second radius = " << second.getRadius() << endl;
}
