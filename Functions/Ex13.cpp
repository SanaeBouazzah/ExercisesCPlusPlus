// Exercise 3:
// write a program to calculate factorial of N! .
// Input : factoriel of 6-> 6x5x4x3x2x1.            Output: 720
// Note : User should enter positive number, otherwise reject it and ask
// to enter again.
#include <iostream>
using namespace std;
void ReadFactorial(int &Fac){
  cout << "\n********************\n";
  cout << "Enter a number : \n";
  cin >> Fac;
  cout << "=> You Entered : "<< Fac << endl;
}
int CalculFactorial(int Fac){
  int result = 1;
  for (int i = 1; i <= Fac; i++)
  {
    cout << i << endl;
    result *= i;
  }
  cout <<"The Factorial of "<<Fac << " : " << result<<endl;
  return Fac;
}
int Repeat(int Fac){
  for (int i = 0; i < 2; i++)
  {
    ReadFactorial(Fac);
    CalculFactorial(Fac);
  }
  return Fac;
}

int main()
{
  int Fac;
  Repeat(Fac);
}