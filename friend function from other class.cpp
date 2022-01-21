#include<iostream>
using namespace std;

class Person;

class PersonManager {
public:
	bool equals(Person a, Person b);
	void copy(Person &dest, Person& src);
};

class Person {
	int height, weight;
public:
	Person(int weight = 0, int height = 0) {
		this->height = height;
		this->weight = weight;
	}
	void show() { cout << "Height = " << height << ", Weight = " << weight << endl; }
	friend bool PersonManager::equals(Person a, Person b);
	friend void PersonManager::copy(Person &dest, Person &src);
};

bool PersonManager::equals(Person a, Person b) {
	if (a.height == b.height && a.weight == b.weight)
		return true;
	else return false;
}

void PersonManager::copy(Person& dest, Person &src) {
	dest.height = src.height;
	dest.weight = src.weight;
}

int main() {
	Person a(60, 170), b(70, 176);
	PersonManager m;
	if (m.equals(a, b)) cout << "Same" << endl;
	else cout << "Different" << endl;

	m.copy(b, a);
	if (m.equals(a, b)) cout << "Same" << endl;
	else cout << "Different" << endl;
	return 0;
}
