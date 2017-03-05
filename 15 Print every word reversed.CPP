//Program to print every word reversed.

#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

void main() {
  clrscr();

  int k=0;
  char string[40], word[20];

  cout << "\nString: ";          //Input
  gets(string);
  strcat(string, " ");

  for(int i = 0; string[i] != '\0'; ++i) {
    if (string[i] != ' ') {
      word[k] = string[i];
      ++k;
    }
    else {
      cout << " ";
      for (int j = k-1; j >= 0; --j)
	cout << word[j];
      k=0;
    }
  }

  getch();
}