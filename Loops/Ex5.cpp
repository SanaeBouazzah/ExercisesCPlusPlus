// Exercise 5:
// write a program to calculate factorial of N! .
// Input : factoriel of 6-> 6x5x4x3x2x1.            Output: 720
// Note : User should enter positive number, otherwise reject it and ask
// to enter again.
//PS: Use Loop For.
#include <iostream>
using namespace std;
int main()
{
  cout << "Hi : Enter a number : \n";
  int num, Sum = 1;
  cin >> num;
  cout << "The Number you Entered is : " << num << endl;
  if (num > 0)
  {
    for (int i = 1; i <= num; i++)
    {
      cout << i << " x ";
      Sum *= i;
    }
    cout << "1 =  " << Sum;
  }else{
    cout << "We accept a positive number.\nTry again!!";
  }
}