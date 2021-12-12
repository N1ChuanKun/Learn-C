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
	friend Person operator+(Person op1, Person op2);
};

Person operator+(Person op1, Person op2) {
	Person tmp;
	tmp.height = op1.height + op2.height;
	tmp.weight = op1.weight + op2.weight;
	return tmp;
}

int main() {
	Person a(40, 155), b(50, 165), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
	return 0;
}
