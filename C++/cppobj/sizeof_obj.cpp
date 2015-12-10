#include <iostream>

using namespace std;

class A
{
public:
    A(){}
    // virtual ~A(){}
private:
    int i;
    double d;
    int *ptri;
public:
    void fun() {}
};

int main(int argc, char *argv[])
{
    A a;
    cout << "a's size is " << sizeof(a) << endl;
    return 0;
}
