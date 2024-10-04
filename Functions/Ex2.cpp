//Exercise 2 :
//Write a program to ask the user to enter Num1, Num2 then print
//the two numbers and then swap them and print it on screen.
//Example : 10 20. Output : 20 10.

#include <iostream> 
using namespace std; 

void swapNum(int num1, int num2){
  int swap;
  cout << "Enter Num1 : " << endl;
  cin >> num1;
  cout << "Enter Num2 : " << endl;
  cin >> num2;
  swap = num1;
  num1 = num2;
  num2 = swap;
  cout << "The Num1 become an : " << num1 << endl;
  cout << "The Num2 become an : " << num2 << endl;
}

int main() 
{
  int num1, num2;
  swapNum(num1, num2);
}