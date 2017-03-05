//Program demonstrating default arguments by implementing the power function

#include <iostream.h>
#include <conio.h>

double power(double b, int e = 2) {
  double ans = 1;
  for (int i = 0; i < e; ++i)
    ans *= b;
  return ans;
}

void main() {
  clrscr();
  cout << "Enter base and exponent: ";

  double base=0, exponent=0;
  cin >> base >> exponent;

  cout << "\npower(" << base << ", " << exponent << ") = " << power(base, exponent);
  cout << "\npower(" << base << ") = " << power(base);

  getch();
}