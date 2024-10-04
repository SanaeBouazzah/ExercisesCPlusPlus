// Exercise 29:
// write a program to ask the user ro enter age if age is vetween 18 and 45
// print "valid age" otherwise print "invalid age" and re-ask to enter a valid 
// age. Note:: you sould keep asking user to enter a valid age until s/he enters it.
#include <iostream>
using namespace std;
int ReadAge(int age){
  cout << "\nEnter your age : \n";
  cin >> age;
  return age;
}
int CheckAge(int From, int To, int age){
  return (age >= From && age <= To);
}
int PrintAge(int From, int To, int age){
  From = 18; To = 45;
  if(CheckAge(From, To, age)){cout << "Valid Age";}
  else{
      cout << "Invalid Age";
  }
}
int main(){
  int From; int To; int age;
  ReadAge(age);
  PrintAge(CheckAge(From, To, age));
}