#include <iostream>
using namespace std;

class Point {
public:
	Point(float x = 0.0, float y = 0.0) : _x(z()) {
		_x = x;
		_y = y;
	}
	Point(const Point& pref) {
		_x = pref._x;
		_y = pref._y;
	}
	virtual ~Point() {}
	virtual float z() {
		return 0.0;
	}
protected:
	float _x, _y;
};

class Point3d : public virtual Point {
public:
	Point3d(float x = 0.0, float y = 0.0, float z = 0.0)
		: Point(x, y), _z(z) {}
	Point3d(const Point3d& rhs) 
		: Point(rhs), _z(z()) {
			z();
		}
	~Point3d() {};
	Point3d& operator=(const Point3d& pref) {
		_x = pref._x;
		_y = pref._y;
		_z = pref._z;
		return *this;
	}
	float z() {
		return 1.0;
	}
private:
	float _z;
};

int main(void)
{
	Point3d point3d;
	Point3d point3d2 = point3d;
	return 0;
}
