//Program to search an array for the given element.

#include <iostream.h>
#include <conio.h>

void main() {
  clrscr();

  const int size=10;
  int array[size];

  //Input the values
  for(int i = 0; i < size; ++i) {
    cout << "Array[" << i << "] = ";
    cin >> array[i];
  }

  //Input wht to search for
  cout << "\n\nSearch for: ";
  int toFind;
  cin >> toFind;

  //Finding that
  int location=-1;                     //If after the loop, location=-1 signifies we did not find that in the array
  for (i = 0; i < size; ++i)
    if (array[i] == toFind)
      location=i;

  //Telling that to user
  if (location==-1)
     cout << "\n\nWe didn't find that";
  else
     cout << "\n\nArray[" << location << "] has that!";

  getch();
}