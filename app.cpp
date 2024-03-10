#include <iostream>
using namespace std;

int main()
{
  //  Find Greatest Number App
  int a, b, c;
  cin >> a >> b >> c;

  if (a > b && a > c)
  {
    cout << a << " Is The Greatest Number\n";
  }
  else if (b > a && b > c)
  {
    cout << b << " Is The Greatest Number\n";
  }
  else
  {
    cout << c << " Is The Greatest Number\n";
  }
    return 0;
}