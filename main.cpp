#include <iostream>
#include <typeinfo>
#include "./classes/Parallelepiped.h"
#include "./classes/Tetrahedron.h"
#include "./classes/Sphere.h"
using namespace std;

int main()
{
    ShapeBase* box = new Parallelepiped(2.0, 3.0, 4.0);
    ShapeBase* pyramid = new Tetrahedron(6.0);
    ShapeBase* ball = new Sphere(3.0);

    cout << "Type: " << typeid(*box).name() << "\n";
    cout << "Parallelepiped:\nSurface area: " << box->surface_area() << "\n\n";

    cout << "Type: " << typeid(*pyramid).name() << "\n";
    cout << "Tetrahedron:\nSurface area: " << pyramid->surface_area() << "\n\n";

    cout << "Type: " << typeid(*ball).name() << "\n";
    cout << "Sphere:\nSurface area: " << ball->surface_area() << "\n\n";

    delete box;
    delete pyramid;
    delete ball;

    return 0;
}