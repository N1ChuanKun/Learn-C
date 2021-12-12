//operator+ with firend function
#include<iostream>
using namespace std;

class Person {
	int height, weight;
public:
	Person(int weight = 0, int height = 0) {
		this->height = height;
		this->weight = weight;
	}
	void show() { cout << "Height = " << height << ", Weight = " << weight << endl; }
	friend Person operator+(int op1,Person op2);
};

Person operator+(int op1,Person op2) {
	Person tmp = op2;
	tmp.height = op2.height + op1;
	tmp.weight = op2.weight + op1;
	return tmp;
}

int main() {
	Person a(60, 170), b;
	a.show();
	b.show();

	b = 5 + a;
	a.show();
	b.show();

	b = 3 + b;
	b.show();
	return 0;
}
