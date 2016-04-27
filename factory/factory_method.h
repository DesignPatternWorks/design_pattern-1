#include <iostream>

class Product {
public:
	virtual ~Product(){};
	virtual void Show(){};
	virtual void Have() {
		std::cout << "Product Have\n";
	};
};

class ProductA : public Product {
public:
	void Show() {
		std::cout<<"I'm ProductA\n";
	}
	void Hava() {
		std::cout << "A Hava\n";
	}
};

class ProductB : public Product {
public:
	void Show() {
		std::cout<<"I'm ProductB\n";
	}
	void Hava() {
		std::cout << "B Hava\n";
	}
};

class ProductC : public Product {
public:
	void Show() {
		std::cout<<"I'm ProductC\n";
	}
	void Hava() {
		std::cout << "C Hava\n";
	}
};


class Factory {
public:
	virtual ~Factory(){};
	virtual Product *CreateProduct() = 0;
};

class FactoryA: public Factory {
public:
	Product *CreateProduct() {
		return new ProductA();
	}
};

class FactoryB: public Factory {
public:
	Product *CreateProduct() {
		return new ProductB();
	}
};
