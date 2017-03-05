//Program to calculate number of notes of different denominations to pay the given price.

#include <iostream.h>
#include <conio.h>

void main() {
  clrscr();

  int cost, note;
  int notes[7] = {500,100,50,20,10,5,1};

  for (int i = 0; i < 7; ++i) {
    note = cost / notes[i];
    cost %= note[i];
    note[i] = note;
  }

  cout << "\n500: " << note[0]
       << "\n100: " << note[1]
       << "\n50:  " << note[2]
       << "\n20:  " << note[3]
       << "\n10:  " << note[4]
       << "\n5:   " << note[5]
       << "\n1:   " << note[6];

  getch();
}