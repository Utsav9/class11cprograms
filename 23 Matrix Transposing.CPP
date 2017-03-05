//Program to transpose a matrix

#include <iostream.h>
#include <conio.h>

void main() {
  clrscr();

  int matrix[15][15], transposed[15][15];
  int row, col, r, c;

  cout << "Enter dimensions of the matrix (R C): ";
  cin >> row >> col;

  cout << "\nInput the matrix...\n";               //Input
  for (r = 0; r < row; ++r) {
    cout << "Row " << r << ", " << col << " numbers: ";
    for (c = 0; c < col; ++c)
      cin >> matrix[r][c];
  }

  cout << "\n\nTransposed!\n\n";                   //Transposing
  for (r = 0; r < row; ++r)
    for (c = 0; c < col; ++c)
      transposed[c][r] = matrix[r][c];

  for (r = 0; r < col; ++r) {                      //Output
    for (c = 0; c < row; ++c)
      cout << transposed[r][c] << "\t";
    cout << "\n";
  }
  getch();
}