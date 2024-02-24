/*Q5. WAP to find the difference between ASCII of two characters ,take them as input .8*/
#include <iostream>
using namespace std;

int main()
{
    char x, y;
    int diff;
    cout << "enter the first character:";
    cin >> x;
    cout << "enter the second character:";
    cin >> y;
    diff = (int)y - (int)x;
    cout << "the difference is:"
         << " " << diff;
}
/*OUTPUT
enter the first character:a
enter the second character:c
the difference is: 2
*/