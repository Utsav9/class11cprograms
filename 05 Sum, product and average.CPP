//Program to read numbers into an array and display their sum, product and average

#include <iostream.h>
#include <conio.h>

void main() {
  clrscr();

  const int size=6; 		//Variable to hold the size of the array. It has to be *CONST* otherwise error.
  int array[size]; 	       	//The array to store variables

  int sum=0, product=1;         //If you do product=0, then it will all go wrong

  for (int i = 0; i < size; ++i) {
    cout << "Array[" << i << "] = ";
    cin >> array[i];

    sum += array[i];
    product *= array[i];
  }

  double avg = sum/size;

  cout << "\nSum    : " << sum
       << "\nProduct: " << product
       << "\nAverage: " << avg;

  getch();
}