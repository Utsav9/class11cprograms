//Program demonstrating string.h library

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main() {
  clrscr();
  char word1[60], word2[60];             //Declaration

  cout << "\nString 1: ";                  //Input
  cin.getline(word1, 60);
  cout << "String 2: ";
  cin.getline(word2, 60);

  int length1 = strlen(word1);               //String Length Determination
  int length2 = strlen(word2);

  if (length1 > length2) {
    cout << "\nWord 1 is bigger! \nResult: ";
    strcpy(word1, word2);
    cout << word1;
  }
  else if (length2 > length1) {
    cout << "\nWord 2 is bigger! \nResult: ";
    strcpy(word2,word1);
    cout << word2;
  }
  else {
    cout << "\nBoth the words are equal! \nResult: ";
    strcpy(word2,word1);
    cout << word2;
  }

  getch();
}