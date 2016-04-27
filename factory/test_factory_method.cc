#include "factory_method.h"
using std::cout; using std::endl;

int main(int argc, char const *argv[])
{
	Factory *p_f = new FactoryA();
	Product *p_p = p_f->CreateProduct();

	p_p->Show();
	p_p->Have();
	delete p_f;
	p_f = nullptr;
	delete p_p;
	p_p = nullptr;


	p_f = new FactoryB();
	p_p = p_f->CreateProduct();

	p_p->Show();
	p_p->Have();
	delete p_f;
	p_f = nullptr;
	delete p_p;
	p_p = nullptr;

	return 0;
}