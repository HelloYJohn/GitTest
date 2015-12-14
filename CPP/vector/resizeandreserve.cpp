#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> vect;
    
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.reserve(100);
    cout<<vect.size()<<endl;  //size为4，但是capacity为100
    int i = 0;
    for (i = 0; i < 104; i++)
    {
        cout<<vect[i]<<endl;
    }
    return 0;
} 
