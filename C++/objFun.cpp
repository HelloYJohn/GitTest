#include <iostream>

using namespace std;
class A
{
public:
    A(int x){i = x;}
    ~A(){}
    void operator() ()
    {
        cout << "Hello operator" << endl;
    }
private:
    int i;
};
int main(int argc, char *argv[])
{
    A a(1);
    a();
    return 0;
}



