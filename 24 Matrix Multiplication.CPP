//Program to multiply two matrices.

#include <iostream.h>
#include <conio.h>
#include <process.h>

void inputMatrix(int matrix[10][10], int row, int col) {
  cout << "\nInput the " << row << " x " << col << " matrix:\n";
  for (int r = 0; r < row; ++r) {
    cout << "Row " << r << ", " << col << " numbers: ";
    for (int c = 0; c < col; ++c)
      cin >> matrix[r][c];
  }
}

void main() {
  clrscr();

  int matrix1[10][10], matrix2[10][10], multiplied[10][10];
  int row1, col1, row2, col2, r, c, i, sum=0;

  cout << "Enter dimensions of the first matrix (R C):  ";
  cin >> row1 >> col1;
  cout << "Enter dimensions of the second matrix (R C): ";
  cin >> row2 >> col2;

  if (row2 != col1) {                                    //Dimension Check
    cout << "\n\n Multiplication not defined. ";
    getch();
    exit(0);
  }

  inputMatrix(matrix1, row1, col1);
  inputMatrix(matrix2, row2, col2);

  for (r = 0; r < row1; ++r) {                           //Matrix Multiplication
    for (c = 0; c < col2; ++c) {
      sum = 0;
      for (i = 0; i < row2; ++i)
	sum += matrix1[r][i] * matrix2[i][c];
      multiplied[r][c] = sum;
    }
  }

  cout << "\n\n\nMultiplied:\n";                    //Ouput
  for (r = 0; r < row1; ++r) {
    for (c = 0; c < col2; ++c)
      cout << multiplied[r][c] << "\t";
    cout << "\n";
  }


  getch();
}