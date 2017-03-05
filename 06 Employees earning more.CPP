//Program to find number of employees earning more than 100000

#include <iostream.h>
#include <conio.h>

void main() {
  clrscr();

  const int size=7;                 //Alter this to change the size of the array
  const long int maxSalary = 100000;     //Alter this to change the salary above which we want the employees
  long int employee[size];
  int counter=0;                    //Counts the number of people earning more than 1 lakh

  for (int i = 0; i < size; ++i) {
    cout << "Employee[" << i << "] = ";
    cin >> employee[i];

    if (employee[i] > maxSalary)
       counter++;
  }

  cout << "\n\n" << counter << " employee earn more than they should!";

  getch();
}