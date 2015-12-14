#include<iostream>

using namespace std;

int main( int argc, char** argv )
{
	auto fn = []( int a, int b ){ return a + b; };
	int c = fn( 2, 3 );
	cout<<"result:"<<c<<endl;
	return 0;
}
