#include <iostream>

class ProductA {
public:
	virtual ~ProductA(){};
	virtual void Show(){};
};

class ProductA1: public ProductA {
public:
	void Show(){
		std::cout<< "ProductA1\n";
	}
};

class ProductA2: public ProductA {
public:
	void Show(){
		std::cout<< "ProductA2\n";
	}
};


class ProductB {
public:
	virtual ~ProductB(){};
	virtual void Show(){};
};

class ProductB1: public ProductB {
public:
	void Show(){
		std::cout<< "ProductB1\n";
	}
};

class ProductB2: public ProductB {
public:
	void Show(){
		std::cout<< "ProductA2\n";
	}
};

class Factory{
public:
	virtual ProductA* CreateProductA()=0;
	virtual ProductB* CreateProductB()=0;
};

class Factory1: public Factory{
public:
	ProductA* CreateProductA(){
		return new ProductA1();
	}
	ProductB* CreateProductB(){
		return new ProductB1();
	}
};

class Factory2: public Factory{
public:
	ProductA* CreateProductA(){
		return new ProductA2();
	}
	ProductB* CreateProductB(){
		return new ProductB2();
	}
};

