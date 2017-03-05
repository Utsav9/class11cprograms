//Program to reverse a string without using temporary variable

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

void main() {
  clrscr();
  char string[10][20];

  cout << "How many words? ";
  int n, i;
  cin >> n;
  n = ((n<1)||(n>10))? 3 : n+1 ;

  cout << "\nEnter " << n-1 << " strings:\n";//Input
  for (i = 0; i < n; ++i)
    cin.getline(string[i], 20);

  cout << "\n\nReversed strings are: \n";
  for (i = 0; i < n; ++i) {
    int length = strlen(string[i]);
    for (int k = 0; k < length/2; ++k) {      //Reverse
       char c = string[i][k];
       string[i][k] = string[i][length-1-k];
       string[i][length-1-k] = c;
    }
    puts(string[i]);
  }

  getch();
}