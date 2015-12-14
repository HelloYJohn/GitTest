#include <iostream>

using namespace std;

class X
{
public:
    X(int val):j(val), i(j) {}
    virtual ~X() {}
    int i;
    int j;    
};

class Y
{
public:
    int i;
    int j;
    Y(int val): j(val) { i = j; }
    virtual ~Y(){}
};
int main(int argc, char *argv[])
{
    X x(3);
    Y y(5);
    cout << "X.i =" <<  x.i << "X.j =" << x.j << endl;
    cout << "Y.i =" <<  y.i << "Y.j =" << y.j << endl; 
    return 0;
}

