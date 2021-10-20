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
    d = (b * b) - (4 * a * c);
    if (d > 0 and a != 0 and b!=0)
    {
        x1 = ((-1 * b - sqrt(d)) / (2 * a));
        x2 = ((-1 * b + sqrt(d)) / (2 * a));
        cout << "first soluyion is :" << x1 << endl;
        cout << "second solution is :" << x2 << endl;
    }
    if (d == 0 and a!=0 and b != 0)
    {
        x1 = ((-b) / (2 * a));
        cout << "x1=x2, the soluyion is:" << x1 << endl;

    }
    if (d < 0 and a!=0 and b != 0)
    {
        cout << "discriminant < 0, equation have no solutions" << endl;
    }
    if (b == 0 and c < 0 and a!=0 and a>0)
    {
        x1 = (sqrt((-c) / a));
        cout << "the only solutiln is:" << x1;
    }
    if (b == 0 and c > 0 and a != 0 and a<0)
    {
        x1 = (sqrt((-c) / a));
        cout << "the only solutiln is:" << x1;
    }
    if (a == 0 and b!=0)
    {
        x1 = (-c / b);
        cout << "the only solutiln is:" << x1;
  
    }
  if(b==0 and c>0 and a!=0 and a>0)
  {
      cout << "doesn't have sense";
  }
  if (b == 0 and c < 0 and a != 0 and a < 0)
  {
      cout << "doesn't have sense";
  }
    if (a == 0 and b == 0) {
        cout << "doesn't have sense";
    }
    
    return 0;
}