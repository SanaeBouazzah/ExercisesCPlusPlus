// Exercise 19: 
// A number is even if it is completely divisible by 2 without leaving a remainder.
// A number is odd if it is not completely divisible by 2 and leaves the remainder 1.
// In this article, we will learn to write a C++ program to check whether
// a number is even or odd.

#include <iostream>
using namespace std;
int main(){

  cout << "\n \n We are gonna check if number is odd or even \n\n";
  using number = short int;
  number Num;
  cout << "Enter a Number : \n";
  cin >> Num;

  if(Num % 2 == 0) cout << "\n\n The Number you Entered is Even.";
  else cout << "\n\n The Number you Entered is Odd.";
  
  return 0;
}