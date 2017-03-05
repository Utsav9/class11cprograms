//To find the smallest and largest element in an array


#include <iostream.h>
#include <conio.h>

void main() {
  clrscr();

  const int size=10;
  int array[size];

  //Input the elements;
  for (int i = 0; i < size; ++i) {
    cout << "Array[" << i << "] = ";
    cin >> array[i];
  }

  //Find the smallest and the largest
  int small=array[0];                        //Small and large must be initialized as array[0];
  int large=array[0];
  for (i = 1; i < size; ++i) {
    if (small > array[i])
       small = array[i];
    if (large < array[i])
       large = array[i];
  }

  cout << "\n\n"
       << large << " is the largest.\n"
       << small << " is the smallest.";

  getch();
}