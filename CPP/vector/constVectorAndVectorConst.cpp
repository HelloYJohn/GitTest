#include <iostream>
#include <vector>

using std::vector;
int main()
{
    vector<int> vi;
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    vi.push_back(4);
    for(int i = 0; i < vi.size(); i++) {
        std::cout << vi[i] << " ";
    }
    std::cout << std::endl;
    const vector<int> cvi = vi;
    //cvi.push_back(5); can't change
    for(int i = 0; i < cvi.size(); i++) {
        std::cout << cvi[i] << " ";
    }
    std::cout << "======================================" << std::endl;
    //vector<const int> vci;   // compile error  isn't exist
    /*vci.push_back(1);
    vci.push_back(2);
    vci.push_back(3);
    vci.push_back(4);
    for(int i = 0; i < vci.size(); i++) {
        std::cout << vci[i] << " ";
    }*/
    return 0;
}
