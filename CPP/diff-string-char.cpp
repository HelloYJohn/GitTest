#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char *argv[])
{
    const char *p1 = "ab中国";
    std::cout << strlen(p1) << std::endl;
    std::string s = "ab中国";
    std::cout << s.length() << std::endl;
    return 0;
}


