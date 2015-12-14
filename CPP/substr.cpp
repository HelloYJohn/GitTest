#include<string>
#include<iostream>
using namespace std;
int main()
{
    string s("12345asdf");
    string a=s.substr(-1,4);    //获得字符串s中 从第0位开始的长度为4的字符串
    cout<<a<<endl;
    return 0;
}
