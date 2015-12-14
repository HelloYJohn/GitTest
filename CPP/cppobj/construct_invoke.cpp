#include <iostream>

using namespace std;

class A {
public:
	int pub_i;
	A()
	{
		pub_i = 0;
		pri_i = 0;
	}
private:
	int pri_i;
};

int main(void)
{
	A a;
	cout << a.pub_i << endl;
	return 0;
}
