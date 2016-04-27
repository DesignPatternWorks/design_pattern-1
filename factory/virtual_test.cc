#include <iostream>
using namespace std;
class A  
{  
public:  
    virtual void foo() //定义他为虚函数是为了允许用基类的指针来调用子类的这个函数。
    {  
        cout<<"A::foo() is called"<<endl;  
    }  
};

class B:public A  
{  
public:  
    void foo()  
    {  
        cout<<"B::foo() is called"<<endl;  
    }  
};  
int main(void)  
{  
    A *a = new B();  
    a->foo();   // 在这里，a虽然是指向A的指针，但是被调用的函数(foo)却是B的!  
    return 0;  
}  