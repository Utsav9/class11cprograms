//Program implementing a simple calculator

#include <iostream.h>
#include <conio.h>

void calc(int a, char c, int b) {
  switch(c) {
    case '+':                 //Add
      cout << a+b;
      break;
    case '-':                 //Subtract
      cout << a-b;
      break;
    case '*':                 //Multiply
      cout << a*b;
      break;
    case '/':                 //Divide
      if (b != 0)
	cout << ((float) a)/b;
      else
	cout << "Zero Division Undefined.";
      break;
    case '%':                 //Remainder
      cout << a%b;
      break;
    default:                  //Error
      cout << "Undefined";
  }
}

void main() {
  clrscr();
  cout << "\nEnter a number, operator (+, -, *, /, %) and then a number.\n";
  int a=0, b=0;
  char c;
  cin >> a >> c >> b;
  cout << "\n\t" << a << " " << c << " " << b << " = ";
  calc(a,c,b);
  getch();
}