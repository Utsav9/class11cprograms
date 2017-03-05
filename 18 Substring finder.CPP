//Program to find if a substring is present in the main string or not.

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main() {
  clrscr();

  char string[40], word[39];                     //Input
  cout << "Enter the string: ";
  gets(string);
  cout << "Enter the substring: ";
  gets(word);

  int flag = 0;
  for (int i = 0; string[i] != '\0'; ++i)
    if (string[i] == word[0]) {
      flag = 1;
      for (int j = 0; word[j] != '\0'; ++j) {
	if (word[j] != string[i+j])
	  flag = 0;
      }
      if (flag = 1) { break; }              //Quit loop is substring is found
    }

  cout << "\n\nThe substring is " << ((flag == 0)? "not there." : "there.");
  getch();
}