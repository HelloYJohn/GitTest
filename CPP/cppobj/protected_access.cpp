#include<iostream>

using namespace std;

class A
{
public:
    A(int x):i(x){}
    virtual ~A(){}
//protected:
public:
    int i;
};

int main(int argc, char *argv[])
{
    A a(10);
    cout << "Protected Member of Class A" << a.i << endl;
    return 0;
}
