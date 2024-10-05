//Exercise 34 : write a program to ask the user to enter, number, M, and then print
//the number^M. Ex2: 2 4. Ouput : 16.
#include <iostream>
using namespace std;

void Readfunc(int &num, int &power){
  cout << "\nEnter a number : \n";
  cin >> num;
  cout << "Enter power of number : \n";
  cin >> power;
}

int Calculfunc(int num, int power){
  int result = 1;
  if (power == 0)
  {
    return 1;
  }
  
  for (int i = 1; i <= power; i++)
  {
    result *= num;
  }
  return result;
}

void Printfunc(int num, int power){
  cout << "the result is : " << Calculfunc(num, power);
}
int main(){
  int num, power;
  Readfunc(num, power);
  Printfunc(num, power);
}