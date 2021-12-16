#include<iostream>
using namespace std;

class Shape {
	Shape* next;
protected:
	virtual void draw() {
		cout << "--Shape--" << endl;
	}
public:
	Shape() { next = NULL; }
	virtual ~Shape(){}
	void paint() { draw(); }
	Shape* add(Shape* p) {
		this->next = p;
		return p;
	}
	Shape* getNext() { return next; }
};

class Circle :public Shape {
protected:
	virtual void draw() {
		cout << "Circle" << endl;
	}
};

class Rect :public Shape {
protected:
	virtual void draw() {
		cout << "Rect" << endl;
	}
};

int main() {
	Shape* pStart = NULL;
	Shape* pLast;

	pStart = new Circle();//up casting
	pLast = pStart;//pLast->new Circle
	pLast = pLast->add(new Rect());//pLast.*next -> new Circle.*next -> new Rect

	Shape* p = pStart;//p->new Circle()
	while (p != NULL) {
		p->paint();//1.Shape paint() -> 2.Shape draw() -> (virtual) -> 3.Circle draw
		p = p->getNext();//return Rect, p->new Rect; (do while Again)/now Rect *next=NULL
	}

	p = pStart;//p->new Circle
	while (p != NULL) {
		Shape* q = p->getNext();//q->new Rect
		delete p;
		p = q;//p->new Rect, do while again
	}
}
