#include <iostream>
#include <cstdio>
#include <cstring>


int main(int argc, char *argv[])
{
    double d;
    char buf[64] = { 0 };
    while (std::cin >> d) {
        memset(buf, 0, sizeof(buf));
        sprintf(buf, "%+8lf", d);
        std::cout << buf << std::endl;
    }
    return 0;
}


