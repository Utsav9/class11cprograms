//Program to record student's names and then sort by first name and then last name.

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

struct Student {
  char firstName[15];
  char lastName[15];
  int roll;
};

void sort (Student s[], int total) {
   int minIndex = 0, minValue;

   //Sort Last Name
   for (int j = 0; j < total; ++j) {
     minIndex = j;
     for (int i = j; i < total; ++i) {
	if (strcmp(s[i].lastName, s[minIndex].lastName) < 0) {
	   minIndex = i;
	}
     }
     Student temp = s[minIndex];
     s[minIndex] = s[j];
     s[j] = temp;
   }

   //Sort First Name
   for (j = 0; j < total; ++j) {
     minIndex = j;
     for (int i = j; i < total; ++i) {
	if (strcmp(s[i].firstName, s[minIndex].firstName) < 0) {
	   minIndex = i;
	}
     }
     Student temp = s[minIndex];
     s[minIndex] = s[j];
     s[j] = temp;
   }

}

void main() {
  clrscr();

  Student pupils[50];
  int total = 0;
  cout << "Enter total students in class: ";
  cin >> total;

  for (int i = 0; i < total; ++i) {
    cout << "\nEnter Roll: ";
    cin >> pupils[i].roll;
    cout << "Enter first name (" << pupils[i].roll << "): ";
    gets(pupils[i].firstName);
    cout << "Enter last name (" << pupils[i].roll << "): ";
    gets(pupils[i].lastName);
  }

  sort(pupils,total);

  clrscr();
  cout << "Sorted students by first name and then last name: \n\n";
  cout << "\tRoll\t\tFirst Name\t\tLast Name\n"
       << "----------------------------------------------------------------------------\n";
  for (i = 0; i < total; ++i) {
    cout << "\t" << pupils[i].roll << "\t\t" << pupils[i].firstName << "\t\t" << pupils[i].lastName << "\n";
  }



  getch();
}