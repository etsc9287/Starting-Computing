#include <iostream>
#include <string>

using namespace std;

int main()
{
    double length = -1;
    double height = -1;
    double area = -1;
    string shape;

    cout << "What type of shape? (tri = triangle, rec = rectangle) ";
    cin >> shape;

    cout << "What is the base length? ";
    cin >> length;

    cout << "What is the height? ";
    cin >> height;

    bool is_triangle = shape == "tri";
    cout << "Boolean variable is_triangle = " << is_triangle << endl;

    if (shape == "tri")
    {
        cout << "This guy is talking about triangles! " << endl;
        area = 0.5 * length * height;
    }
    else
    {
        cout << "Rectangles SUCK" << endl;
        area = length * height;
    }

    cout << "Area of your shape with base length=" << length << " and height=" << height << " is " << area << endl;
    return 0;
}