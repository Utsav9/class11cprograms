// Program to reverse a matrix without using a temporary variable



#include <iostream.h>
#include <conio.h>

void inputMatrix(int [30][30], int, int);
void outputMatrix(int [30][30], int, int);
void reverseItAll(int [30][30], int, int);

void main() {
   clrscr();

   int matrix[30][30];
   int row=0, col=0;
   cout << "Rows: ";
   cin >> row;
   cout << "Cols: ";
   cin >> col;

   inputMatrix(matrix, row, col);

   cout << "You had: ";
   outputMatrix(matrix, row, col);

   reverseItAll(matrix, row, col);

   cout << "We have: ";
   outputMatrix(matrix, row, col);

   getch();
}


void inputMatrix(int matrix[30][30], int row, int col) {
  cout << "\n";
  for (int r=0; r < row; ++r) {
    for (int c=0; c < col; ++c) {
      cout << "Matrix[" << r << "][" << c << "] = ";
      cin >> matrix[r][c];
    }
    cout << "\n";
  }

  clrscr();
  return;
}

void outputMatrix(int matrix[30][30], int row, int col) {
  cout << "\n\n";
  for (int r = 0; r < row; ++r)  {
    for (int c = 0; c < col; ++c)
      cout << matrix[r][c] << "\t";
    cout << "\n\n";
    }
}

void reverseItAll(int matrix[30][30], int row, int col) {
  for (int r=0; r < row; ++r)
    for (int c=0; c < col/2; ++c) {
      matrix[r][c] -= matrix[r][col-1-c];
      matrix[r][col-1-c] += matrix[r][c];
      matrix[r][c] -= matrix[r][col-1-c];
      matrix[r][c] = -1 * matrix[r][c];
    }

}