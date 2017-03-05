//Program to tell if a number is prime and if it is odd or even

#include <iostream.h>
#include <conio.h>

void oddEven(int);                     //Prototypes
void primeCheck(int);

void main() {
  clrscr();

  int n = 0;
  char again = 'y';

  do {
     cout << "\n\nEnter the number: ";
     cin >> n;

     if (n > 0) {                           //Error Checking
       oddEven(n);
       primeCheck(n);
     } else {
       cout << "Error 400: Bad Request\n";
     }

     cout << "\nAgain? (Y/N) ";
     cin >> again;

  } while (again == 'y' || again == 'Y');

}

void oddEven(int num) {                        //To check odd or even
  cout << ((num%2==0)? "Even\n": "Odd\n");
}

void primeCheck(int num) {
  int isPrime = 1;                             //Flag 0 = Not Prime
					       //Flag 1 = Is Prime
  for (int i = 2; i < num/2; ++i)
    if (num%i != 0)
      isPrime = 0;

  cout << ((isPrime)? "Prime \n" : "Not Prime \n");
}