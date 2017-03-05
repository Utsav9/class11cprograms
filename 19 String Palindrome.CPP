//Program to check if a string is palindrome or not

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main() {
 clrscr();

 char word[100];
 cout << "The Word: ";
 gets(word);

 for (int size=0; word[size] != '\0'; ++size);  //To determine the length of the word, 
                                                //using the fact that the last character of the word will \0

 //Determining palindrome. If it is not, we will make flag=0
 int flag=1;
 cout << "\n\n";

 for (int i = 0; i < size/2; ++i) {
   cout << "\tComparing " << word[i] << " and " << word[size-1-i] << "\n";

   if (word[i] != word[size-1-i])     //Comparing first char to last, then second to second last and so on. 
     flag=0;                          //We will make flag=0 if they do not match
 }

 //Result
 if (flag==0)
   cout << "\n\nThat is not a palindrome, and I know that.";
 else
   cout << "\n\nThat is a palindrome, and you knew it.";

 getch();
}