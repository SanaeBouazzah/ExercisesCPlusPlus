//Exercise 37 :
// Write a C++ program that swaps two variables without using a third variable.
//Example : 10, 20.           Output : 20, 10.
#include <iostream>
using namespace std;

int main(){
  int num1, num2;
  cout << "Enter first number : \n";
  cin >> num1;
  cout << "Enter second number : \n";
  cin >> num2;
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
  cout << "\n###############\n\n";
  cout << "First Number is : " << num1<<endl;
  cout << "Second Number is : " << num2;

}