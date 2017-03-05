//Program to arrange three numbers in ascending order

#include <iostream.h>
#include <conio.h>

void main() {
  clrscr();

  int a=0, b=0, c=0;
  cout << "\nEnter three numbers: ";
  cin >> a >> b >> c;

  int big = a;                            //Assuming a is biggest.
  if (b >= a && b >= c) {big = b;}        //Checking if b is biggest.
  if (c >= a && c >= b) {big = c;}        //Checking if c is biggest.

  int small = a;                          //Assuming a is smallest.
  if (b <= a && b <= c) {small = b;}      //Checking if b is smaller.
  if (c <= a && c <= b) {small = c;}      //Checking if c is smaller.

  int middle = a;                                   //Assuming a is the middle one.
  if ((big == a) && (small == c) ||                 //If a,c are either big,small,
      (big == c) && (small == a))    {middle = b;}  //then b is the middle one.
  if ((big == a) && (small == b) ||                 //If a,b are either big,small,
      (big == b) && (small == a))    {middle = c;}  //then c is the middle one.

  cout << "\n" << big << " >= " << middle << " >= " << small;


  getch();
}