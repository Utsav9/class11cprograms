//Program displaying menu functionality: Rectangle Computations

#include <iostream.h>
#include <conio.h>
#include <math.h>

int getChoice() {
  clrscr();                             //Menu
  cout << "Rectangle Menu: \n"
       << " 1. Area \n"
       << " 2. Perimeter \n"
       << " 3. Diagonal \n\n";

  int choice;

  do {                                  //Choice Input and
    cout << "Enter choice: ";             //Error Checkig
    cin >> choice;
  } while (choice > 3 || choice < 1);

  return choice;
}

void main() {
  char again;

  do {

    float l=0, b=0;
    again = 'n';
    int choice = getChoice();

    cout << "\n\nEnter length and breadth: ";
    cin >> l >> b;

    switch(choice) {
       case 1:                              //Area
          cout << "Area: " << l*b;
          break;
       case 2:                              //Perimeter
          cout << "Perimeter: " << l+l+b+b;
          break;
       case 3:                              //Diagonal
          cout << "Diagonal: " << sqrt(l*l+b*b);
          break;
       default:
          cout << "Invalid Choice";
    }

    cout << "\n\nAgain? (Y/N) ";
    cin >> again;

  } while (again == 'y' || again == 'Y');
}