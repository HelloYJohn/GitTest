#include <iostream>
#include <vector>

using namespace std;
using std::vector;

int main(int argc, char *argv[])
{
    vector<int> veci1, veci2;
    veci1.push_back(1);
    veci1.push_back(2);
    veci1.push_back(3);
    veci1.push_back(4);
    for (int i = 0; i < veci1.size(); ++i)
    {
        cout << veci1[i];
    }
    veci2 = veci1;
    for (int j = 0; j < veci2.size(); ++j)
    {
        cout << veci2];
    }
    return 0;
}

