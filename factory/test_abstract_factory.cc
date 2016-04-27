#include "abstract_factory.h"
using std::cout; using std::endl;

int main(int argc, char const *argv[])
{
	Factory *f1 = new Factory1();
	Factory *f2 = new Factory2();

	ProductA *p1_a = f1->CreateProductA();
	ProductB *p1_b = f1->CreateProductB();
	p1_a->Show();
	p1_b->Show();

	delete p1_a;
	p1_a = nullptr;
	delete p1_b;
	p1_b = nullptr;
	return 0;
}