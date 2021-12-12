//prefix operator with member function (전위연산자 멤버함수로 구현)
#include<iostream>
using namespace std;

class Person {
	int height, weight;
public:
	Person(int weight = 0,int height = 0) {
		this->height = height;
		this->weight = weight;
	}
	void show() { cout << "Height = " << height << ", Weight = " << weight << endl; }
	Person operator++();
};

Person Person::operator++() {
	this->height++;
	this->weight++;
	return *this;
}

int main() {
	Person a(60, 170), b;
	a.show();
	b.show();

	b = ++a;
	a.show();
	b.show();

	return 0;
}
