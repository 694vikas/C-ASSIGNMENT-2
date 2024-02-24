#include <iostream>
using namespace std;
int main()
{
    // πr2h
    float r, h, vol;
    cout << "enter the value of radius and height of the cylinder" << endl;
    cin >> r >> h;
    vol = (3.14 * r * r * h);
    cout << "the volume of cylinder is:" << vol;
}
/*OUTPUT:
enter the value of radius and height of the cylinder
3 10
the volume of cylinder is:282.6*/