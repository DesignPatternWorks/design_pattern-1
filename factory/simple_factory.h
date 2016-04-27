#include <iostream>
typedef enum ProductType
{
	TypeA,
	TypeB,
	TypeC
}ProductType;

class Product {
//虚函数为了重载和多态的需要，在基类中是由定义的，即便定义是空，所以子类中可以重写也可以不写基类中的函数
public:
	virtual ~Product(){};
	// if have not virtual ~Product(){}; warning: delete called on 'Product' that is abstract but has non-virtual destructor [-Wdelete-non-virtual-dtor]
    //    delete p_a;
	virtual void Show()=0;//纯虚函数在基类中是没有定义的，必须在子类中加以实现
	// diff ? why virtual ?
	//void Show(){
	//	std::cout << "Base Product\n";
	//}

	virtual void Have() {
		std::cout << "Product Have\n";
	};
};

class ProductA : public Product {
public:
	//~ProductA() {};
	void Show() {
		std::cout<<"I'm ProductA\n";
	}
	void Hava() {
		std::cout << "A Hava\n";
	}
};

class ProductB : public Product {
public:
	//~ProductB() {};
	void Show() {
		std::cout<<"I'm ProductB\n";
	}
	void Hava() {
		std::cout << "B Hava\n";
	}
};

class ProductC : public Product {
public:
	//~ProductC() {};
	void Show() {
		std::cout<<"I'm ProductC\n";
	}
	void Hava() {
		std::cout << "C Hava\n";
	}
};

class Factory {
public:
	Factory(){};
	Product* CreatProduct(ProductType type) {
		switch(type) {
			case TypeA:
				return new ProductA();
			case TypeB:
				return new ProductB();
			case TypeC:
				return new ProductC();
			default:
				return nullptr;
		}
	}	
};