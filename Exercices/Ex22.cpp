// Exercise 22:
// Write a program that allows the user to enter the grade
// scored in a programming class (0-100). Modify the 
// program so that it will notify the user of their
// letter grade using switch statement.
// 0-59 F
// 60-69 D
// 70-79 C
// 80-89 B
// 90-100 A.
#include <iostream>
using namespace std;
int main(){
  int grade;
  cout << "if your grade between 0 and 59 Enter 1"<< endl;
  cout << "if your grade between 60 and 69 Enter 2"<< endl;
  cout << "if your grade between 70 and 79 Enter 3"<< endl;
  cout << "if your grade between 80 and 89 Enter 4"<< endl;
  cout << "if your grade between 90 and 100 Enter 5"<< endl;
    cout << "\n\n Enter your Grade score : \n\n";
  cin >> grade;
  switch (grade)
  {
  case 1 : cout << "You\'ve got a F";
    break;
  case 2 : cout << "You\'ve got a D";
    break;
  case 3 : cout << "You\'ve got a C";
    break;
  case 4 : cout << "You\'ve got a B";
    break;
  case 5 : cout << "You\'ve got a A";
    break;
  
  default: cout << "You have right to enter from 1 to 5 !!!";
    break;
  }

  return 0;
}