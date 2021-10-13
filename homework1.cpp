#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a;
    double b;
    double c;
    double x1;
    double x2;
    double d;
    cout << "enter value a: ";
    cin >> a;
    cout << "enter value b: ";
    cin >> b;
    cout << "enter value c: ";
    cin >> c;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = ((-1 * b - sqrt(d)) / 2*a);
        x2 = ((-1 * b + sqrt(d)) / 2 * a);
        cout << "first soluyion is :" << x1;
        cout << "second solution is :" << x2;
    }
    if (d == 0)
    {
        x1 = ((-1 * b) / 2 * a);
        cout << "The only soluyion is" << x1;

    }
   if (d<0)
    {
        cout << "discriminant < 0, equation have no solutions";
    }
    return 0;
}