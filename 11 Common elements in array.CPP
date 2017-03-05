// To find common elements in two arrays

#include <iostream.h>
#include <conio.h>

void inputArray( int[], int);

void main() {
  clrscr();

  int size1=0, size2=0;
  int array1[50], array2[50];

  cout << "Elements in Array1: ";
  cin >> size1;
  inputArray(array1, size1);

  cout << "Elements in Array2: ";
  cin >> size2;
  inputArray(array2, size2);

  //Comparing Common Elements
  cout <<"\n\nCommons: ";
  for (int i = 0; i < size1; ++i)
    for (int o = 0; o < size2; ++o)
      if (array1[i] == array2[o])
	cout << array1[i] << " ";


  getch();
}

void inputArray(int array[50], int size) {
  cout << "\n";
  for (int i = 0; i < size; ++i) {
   cout << "Array[" << i << "] = ";
   cin >> array[i];
  }
  cout << "\n";
  return;
}