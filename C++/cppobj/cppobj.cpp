#include <iostream>

using namespace std;

class X
{
public:
    X(){cout << "constructor" << endl;}
    virtual ~X(){cout << "destructor" << endl;}
    X(X& x){ cout << "copy constructor" << endl;} 
    virtual void foo() {cout << "virtual foo()" << endl;}
};

int main(int argc, char *argv[])
{
    X xx;
    X xxx(xx);
    X xxxx = xxx;
    X *px = new X;
    xx.foo();
    px->foo();
    delete px;
    return 0;
}


