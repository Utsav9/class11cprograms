//Program to find the number of vowels in a string

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main() {
  clrscr();

  //Input
  cout << "String: ";
  char string[100];
  gets(string);

  //Finding the number of vowels
  int num=0;
  for (int i=0; string[i] != '\0'; ++i)
    switch(string[i]) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u': num++;
    }

  //Output
  cout << "\n\nThat has " << num << " vowels.";


  getch();
}