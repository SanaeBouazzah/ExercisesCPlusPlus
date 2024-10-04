// Exercise 20:
// write a program to calculate factorial of N! .
// Input : factoriel of 6-> 6x5x4x3x2x1.            Output: 720
// Note : User should enter positive number, otherwise reject it and ask
// to enter again.
//PS: Use Loop While.
#include <iostream>
using namespace std;
int main()
{
  int num, Factorial = 1, i=1;
  cout << "Enter Positive Number : \n";
  cin >> num;
  while (i <= num)
  {
    cout << i << " * ";
    Factorial *= i;
    i++;

  }
  cout << "Factorial is : " << Factorial;
  

}