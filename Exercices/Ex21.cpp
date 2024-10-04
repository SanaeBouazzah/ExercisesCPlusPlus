// Exercise 21;
// A simple calculator is a device used to perform basic arithmetic 
// operations such as addition, subtraction, multiplication, and division,
// Write a program to calculate two numbers.

#include <iostream>
using namespace std;
int main(){
  int num1, num2;
  char op;
  cout << "Enter the first Number :" << endl;
  cin >> num1;
  cout << endl ;
  cout << "Enter the Operator + or - or \\ or * or % :" << endl;
  cin >> op;
  cout << endl ;
  cout << "Enter the second Number :" << endl;
  cin >> num2;
  if(op == '+'){
    cout << num1 + num2 << endl;
  }
  else if(op == '-'){
    cout << num1 - num2 << endl;
  }
  else if(op == '*'){
    cout << num1 * num2 << endl;
  }
  else if(op == '/'){
    cout << num1 / num2 << endl;
  }
  else if(op == '%'){
    cout << num1 % num2 << endl;
  }

  return 0;
}