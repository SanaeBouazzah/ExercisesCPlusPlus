// Exercise 5 : write a program to ask the user to enter Age. if the age is etween 18 and
// 45 print "ValidAge" otherwise print "InvalidAge" and re-ask eo enter a ValidAge.
// Note: you should keep asking user to enter a valid age until s/he enters it.

#include <iostream>
using namespace std;
enum enAge
{
  ValidAge = 1,
  InvalidAge = 2
};

void Readfunc(int &age)
{
  cout << "\nEnter your age : \n";
  cin >> age;
}

enAge Checkfunc(int age)
{
    return (age >= 18 && age <= 45) ? enAge::ValidAge : enAge::InvalidAge;
}

void Printfunc(int &age)
{
  Readfunc(age);
    while (Checkfunc(age) == enAge::InvalidAge) {
      cout << "Invalid Age. Please enter an age between 18 and 45: ";
        Readfunc(age);
    }
    
    cout << "Valid Age" << endl;
  
}


int main()
{
  int age;
  Printfunc(age);
}