//Program which records many student's performance and dispays the top achievers.

#include <iostream.h>
#include <conio.h>

struct Student {
  int roll;
  float english;
  float maths;
  float computer;
};

const int total = 5;
int fail=0, distinction=0, topRoll1=0, topRoll2=0;
float topPercent1=0, topPercent2=0;

Student students[total];

void result() {
  for (int i = 0; i < total; ++i) {
    int percent = (students[i].maths +          //Percent Calculation
		   students[i].english +
		   students[i].computer)/3;

    if (percent >= 75) { distinction++; }       //Distinctions
    if (percent < 40) { fail++; }               //Fails

    if (percent > topPercent1) {                //Storing top scorer
      topPercent2 = topPercent1;
      topRoll2 = topRoll1;

      topPercent1 = percent;
      topRoll1 = students[i].roll;

    }
    else if (percent > topPercent2) {           //Storing second
      topPercent2 = percent;                    //top scorer
      topRoll2 = students[i].roll;
    }
  }
}

void input() {
  for (int i = 0; i < total; ++i) {             //input of records
    clrscr();
    cout << "Roll " << i << ": \n";
    students[i].roll=i;
    cout <<"\nEnglish: ";
    cin >> students[i].english;
    cout << "Maths: ";
    cin >> students[i].maths;
    cout << "Computer: ";
    cin >> students[i].computer;
  }

}

void main() {
  input();
  result();                                     //output

  clrscr();
  cout << "\n\nFails: " << fail << "\n"
       << "Distinctions: " << distinction << "\n\n"
       << "-------------------------------------------------------\n"
       << "\nHighest Scorer Roll: " << topRoll1 
       << "\t\t\tPercent: (" << topPercent1 << "%)\n"
       << "\nEnglish Score : " << students[topRoll1].english
       << "\nMaths Score   : " << students[topRoll1].maths
       << "\nComputer Score: " << students[topRoll1].computer
       << "\n\n-------------------------------------------------------\n\n"
       << "Second Highest Scorer Roll: " << topRoll2 
       << "\t\tPercent: (" << topPercent2 << "%)\n"
       << "\nEnglish Score : " << students[topRoll2].english
       << "\nMaths Score   : " << students[topRoll2].maths
       << "\nComputer Score: " << students[topRoll2].computer
       << "\n\n-------------------------------------------------------\n";

  getch();
}