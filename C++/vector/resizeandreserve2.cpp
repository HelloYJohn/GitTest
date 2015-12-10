#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int>  veci, veci2;
    veci.reserve(10);
    veci2.resize(10);
    veci[1] = 1;
    cout <<veci.size();
    cout << veci[1] << endl;
    cout << "==================================" << endl;
    for (int i = 0; i < veci2.size(); ++i)
    {
        cout << veci2[i] << "\t";
    }
    cout << veci2.size() << endl;
    return 0;
}
