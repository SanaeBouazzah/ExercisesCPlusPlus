// Exercise 20:
// Write a C++ program to check the largest number among three given integers,
// without using a function max().

#include <iostream>
using namespace std;
int main(){

  int Num1, Num2 , Num3;
  cout << "\n\n Enter first number 1 :\n\n";
  cin >> Num1;
  cout << "Enter second number 2 :\n\n";
  cin >> Num2;
  cout << "Enter third number 3 :\n\n";
  cin >> Num3;

  cout<< " the numbers you entered are : " << Num1
   << " " <<Num2 << " " <<Num3 << " \n \n";

  if(Num1 > Num2){
    if(Num1 > Num3){
      cout << "the max number is : " << Num1;
    }
    else{
      cout << "the max number is : " << Num3;
    }
  }else if(Num2 > Num1){
    if(Num2 > Num3){
      cout << "the max number is : " << Num2;
    }else{
      cout << "the max number is : " << Num3;
    }
  }
  
  return 0;
}