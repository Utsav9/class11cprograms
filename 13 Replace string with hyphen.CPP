//Program to replace every string with a hyphen

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main() {
  clrscr();

  //Input
  char string[100];
  cout << "String: ";
  gets(string);

  //Replacing
  for (int i = 0; string[i] != '\0'; ++i)
    if (string[i] == ' ')
      string[i] = '-';

  //Output
  cout << "Answer: ";
  puts(string);

  getch();
}