//Program which keeps the record of voters and displays those above the age of 60.

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

struct Voter {
  long int id;
  char name[20];
  char address[30];
  unsigned int age;
};

const int total = 8;
Voter voters[total];

void output(int index) {                    //Output
  cout << "\n\nVoter ID:   " << voters[index].id
       << "\nVoter Name: " << voters[index].name
       << "\nAddress:    " << voters[index].address
       << "\nVoter Age:  " << voters[index].age
       << "\n------------------------------------\n";
}

void input() {                              //Input
  for (int i = 0; i < total; ++i) {
    clrscr();
    cout << "Index " << i << "\n\n";
    cout << "Voter ID:   ";
    cin >> voters[i].id;
    cout << "Voter Name: ";
    gets(voters[i].name);
    cout << "Address:    ";
    gets(voters[i].address);
    cout << "Voter Age:  ";
    cin >> voters[i].age;
  }
}

void main() {
  input();
  clrscr();

  for (int i = 0; i < total; ++i)
    if (voters[i].age > 60)
      output(i);

  getch();
}