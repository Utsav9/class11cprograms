//Program to find the row and column sum of a matrix

#include <iostream.h>
#include <conio.h>


void main() {
  clrscr();

  int matrix[10][10];
  int row, col, r, c;
  cout << "Enter matrix dimentions (R C): ";
  cin >> row >> col;

  cout << "\n\nInputting Matrix...\n";

  for (r = 0; r < row; ++r) {
    cout << "Row " << r << ", " << col << " numbers: ";
    for (c = 0; c < col; ++c)
      cin >> matrix[r][c];
  }

  cout << "\n\n";

  int sum=0;                                   //Row Sum
  for (r = 0; r < row; ++r) {
    for (c = 0; c < col; ++c) {
      sum += matrix[r][c];
    }
    cout << "Sum Row " << r << " = " << sum << "\n";
    sum = 0;
  }

  cout << "\n\n";                              //Column Sum
  for (c = 0; c < col; ++c) {
    for (r = 0; r < row; ++r) {
      sum += matrix[r][c];
    }
    cout << "Sum Column " << c << " = " << sum << "\n";
    sum = 0;
  }

  getch();

}