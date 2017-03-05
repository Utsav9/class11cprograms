//Program to check if the given number is a palindrome or not.

#include <iostream.h>
#include <conio.h>

void main() {
 clrscr();

 long int i=0;
 cin >> i;

 long int t=i;
 long int reverse=0;
 do {
   reverse = reverse*10 + i%10;
   i /= 10;
 } while (i!=0);


 if (t==reverse)
    cout << "Palindrome!!!";
 else
    cout << "Not a Palindrome :( ";

 getch();
}