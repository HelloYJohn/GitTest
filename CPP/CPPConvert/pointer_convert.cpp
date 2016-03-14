#include <iostream>
#include <string>
#include <vector>

std::string vector2String();

int main(int argc, char *argv[])
{
    std::string str = vector2String();
    int len = str.size();
    const int *cint = reinterpret_cast<const int *>(str.c_str());
    std::cout << "======================main=============================" << std::endl;
    for (int i = 0; i < len; ++i) {
        std::cout << cint[i] << "  ";
    }
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    return 0;
}

std::string vector2String() {
    int a[5] = { 1, 2, 3, 4, 5 };
    std::vector<int> vi(a, a+sizeof(a)/sizeof(int));
    
    std::cout << "=======================vector===========================" << std::endl;
    for (std::vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
        std::cout << *it << "  ";
    }
    std::cout << std::endl;
    std::cout << "========================================================" << std::endl;
    char *c = reinterpret_cast<char *>(&vi[0]);
    std::string str(c, sizeof(vi[0]) * vi.size());
    std::cout << "======================string inner======================" << std::endl;
    const int *cint = reinterpret_cast<const int *>(str.c_str());
    for (int i = 0; i < vi.size(); ++i) {
        std::cout << cint[i] << "  ";
    }
    std::cout << std::endl;
    std::cout << "========================================================" << std::endl;
    return str;
}
