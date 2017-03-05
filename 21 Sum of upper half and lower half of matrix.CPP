//Program to sum the upper and lower half of matrix

#include <iostream.h>
#include <conio.h>

void main() {
  clrscr();

  int matrix[10][10];
  int row, col, r, c, sumAbove = 0, sumBelow = 0;

  cout << "Enter the dimensions (R C): ";
  cin >> row >> col;

  cout << "\nInput the Matrix...\n";          //Matrix Input
  for (r = 0; r < row; ++r) {
    cout << "Row " << r << ", " << col << " numbers: ";
    for (c = 0; c < col; ++c)
      cin >> matrix[r][c];
  }

  for (r = 0; r < row; ++r)                     //Sum
    for (c = 0; c < col; ++c) {
      if (r > c) { sumBelow += matrix[r][c]; }
      if (r < c) { sumAbove += matrix[r][c]; }
    }

 cout << "\nSum Above = " << sumAbove;
 cout << "\nSum Below = " << sumBelow;

  getch();
}