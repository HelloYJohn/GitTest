#include <iostream>
#include <cstdio>
using namespace std;

class Point3d {
public:
    virtual ~Point3d() {}
public:
    static Point3d origin;
    float x, y, z;
};

int main(void)
{
    printf("&Point3d::x = %p\n", &Point3d::x);
    printf("&Point3d::y = %p\n", &Point3d::y);
    printf("&Point3d::z = %p\n", &Point3d::z);
    return 0;
}
