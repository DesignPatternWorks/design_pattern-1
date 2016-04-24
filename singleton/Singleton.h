#ifndef _SINGLETON_
#define _SINGLETON_
#include <new>

//Gamma Singleton"懒汉模式" 
class Singleton0 {
private:
	Singleton0() {}; // {} is must 
	Singleton0(Singleton0 const&);
	static Singleton0 * p_instance;

public:
	static Singleton0 * getInstance(){
		if (p_instance == nullptr) {
			p_instance = new Singleton0; // error: ld: symbol(s) not found for architecture x86_64
		}
		return p_instance;
	}
	
	bool destructor() {
		if (p_instance) {
			delete p_instance;
			p_instance = nullptr;
			std::cout << "ok" <<std::endl;
			return true;
		}
		std:: cout << "false" << std::endl;
		return false;
	}
	~Singleton0(){
		std::cout << "~Singleton0" <<std::endl;
	}
};



//Meyers Singleton 懒汉模式(局部静态变量-最佳版)
class Singleton {
public:
    static Singleton& getInstance() {
        static Singleton instance; // Guaranteed to be destroyed.
        						   // Instantiated on first use.
        return instance;
    }
private:
    Singleton() {};                   // Constructor? (the {} brackets) are needed here.

    // C++ s03
    // ========
    // Dont forget to declare these two. You want to make sure they
    // are unacceptable otherwise you may accidentally get copies of
    // your singleton appearing.
    //Singleton(Singleton const&);              // Don't Implement
    //void operator=(Singleton const&); // Don't implement

    // C++ 11
    // =======
    // We can use the better technique of deleting the methods
    // we don't want.

public:
    Singleton(Singleton const&)               = delete;
    void operator=(Singleton const&)  = delete;

    // Note: Scott Meyers mentions in his Effective Modern
    //       C++ book, that deleted functions should generally
    //       be public as it results in better error messages
    //       due to the compilers behavior to check accessibility
    //       before deleted status
    ~Singleton(){
    	std::cout << "~Singleton\n";
    }
};

#endif