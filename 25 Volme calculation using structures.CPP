//Program to calculate volume in cubic feet from the given dimensions in feet and inches using structures.

#include <iostream.h>
#include <conio.h>

struct Distance {
  int feet;
  float inches;
};

struct Volume {
  Distance l, b, h;
};

void main() {
  clrscr();

  Distance length, breadth, height;

  cout << "Enter length in feet and inches: \n\n";
  cin >> length.feet >> length.inches;
  cout << "\nEnter breadth in feet and inches: \n\n";
  cin >> breadth.feet >> breadth.inches;
  cout << "\nEnter height in feet and inches: \n\n";
  cin >> height.feet >> height.inches;

  Volume room = { {length.feet, length.inches}, {breadth.feet, breadth.inches}, {height.feet, height.inches} };

  cout << "\n\nThe volume of the room is: "
       << ( (room.l.feet+(room.l.inches/12)) *
	    (room.b.feet+(room.b.inches/12)) *
	    (room.h.feet+(room.h.inches/12)))
       << " cubic feet.";


  getch();
}