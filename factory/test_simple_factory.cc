#include "simple_factory.h"
#include <iostream>
using std::cout; using std::endl;

int main(int argc, char const *argv[])
{
	Factory *my_factory = new Factory();

	Product *p = my_factory->CreatProduct(TypeA);
	if(p) {
		p->Show();
		p->Have();
	}

	p = my_factory->CreatProduct(TypeC);
	if(p) {
		p->Show();
		p->Have();
	}

	delete p;
	p = nullptr;
	delete my_factory; 
	my_factory = nullptr;
	return 0;
}