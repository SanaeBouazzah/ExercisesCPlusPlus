//Exercise : write a program to calculate factorial of N! 
//Ex: factorial of 6 -> 6 * 5 * 4 * 3 * 2 * 1 = 720
//Note : User should only enter positive numbers, otherwise reject it 
// and ask to enter again.

#include<iostream>
using namespace std;

int Readfunc(string message){
  int num;
  cout << message;
  cin >> num;
  return num;
}
int Factorial(int num){
  int Factorial = 1;
  for (int i = num; i > 1; i--)
  {
    Factorial *= i;
  }
  return Factorial;
}
void Printfunc(int num){
  cout << "Factorial is : " << Factorial(num);
}
int main(){
  int num;
  Printfunc(Readfunc("Enter Factorial : "));
}