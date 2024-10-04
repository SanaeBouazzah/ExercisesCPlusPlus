//write a program to ask the user to enter : num1, num2, operationType
//then perform the calculation according to the operationType as follows:
// + : add the two numbers.
// - : subtract the two numbers.
// * : multiply the two numbers.
// / : divide the two numbers.
// Example : 10 20 * .      Output : 200.
#include <iostream>
using namespace std;
int main()
{
  int num1, num2;
  char operationType;
  cout << "\nEnter first number : \n";
  cin >> num1;
  cout << "Enter OperationType : + - * / :\n";
  cin >> operationType;
  cout << "\nEnter second number : \n";
  cin >> num2;
  if(operationType == '+'){
    cout << num1 << " + " << num2 << " = " << num1 + num2;
  }else if(operationType == '-'){
    cout << num1 << " - " << num2 << " = " << num1 - num2;
  }else if(operationType == '*'){
    cout << num1 << " * " << num2 << " = " << num1 * num2;
  }else if(operationType == '/'){
    cout << num1 << " / " << num2 << " = " << num1 / num2;
  }else {
    cout <<"\nSomething Wrong!! repeat the process : ";
  }
}