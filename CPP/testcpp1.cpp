#include <iostream>

using namespace std;
class A
{
public:
    A() 
    {
    }
    virtual ~A(){}
private:
    int i;
public:
    void fun()
    {
        cout << "fun" << endl;
    }
};
int main(int argc, char *argv[])
{
    A a;
    a.fun();
    return 0;
}

