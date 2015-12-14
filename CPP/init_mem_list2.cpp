#include <iostream>

using namespace std;

class X
{
public:
    int i;
    static int j;
    X(){}
    virtual ~X(){}
};

int main(int argc, char *argv[])
{
    X x;
    cout << x.i  <<endl;
    return 0;
}
