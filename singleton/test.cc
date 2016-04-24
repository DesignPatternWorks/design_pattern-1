#include <iostream>
#include "Singleton.h"

Singleton0* Singleton0::p_instance = nullptr;

void test_0()
{
	Singleton0 * p = Singleton0::getInstance();
	Singleton0 * p2 = Singleton0::getInstance();
	p->destructor();
	p2->destructor();
}

void test_1()
{
	Singleton::getInstance();
}


int main(int argc, char const *argv[])
{
	test_0();
	test_1();
	return 0;
}