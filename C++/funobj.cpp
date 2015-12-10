#include <iostream>

using namespace std;

class FuncObjType
{
public:
	void operator() ()
	{
		cout<<"Hello C++!"<<endl;
	}
};

int main(int argc, char *argv[])
{
    FuncObjType val;
    val();
    return 0;
}
