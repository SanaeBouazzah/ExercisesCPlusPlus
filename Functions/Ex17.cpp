// Exercise 17:
// write a program to ask the user to enter : Num1, Num2, Num3 then
//print the sum of entered numbers . Ex : 10, 20, 30.
//Output : 60.

#include <iostream>
using namespace std;
int ReadNumbers(int &Num1, int &Num2, int &Num3){
  cout << "\nEnter 3 Numbers : \n";
  cin >> Num1 >> Num2 >> Num3;
  return Num1, Num2, Num3;
}
int Sum(int Num1, int Num2, int Num3){
  int sum = Num1 + Num2 + Num3;
  return sum;
}
void PrintNumbers(int Num1, int Num2, int Num3){
  cout << "The sum is : " << Sum(Num1, Num2, Num3) << endl;
}
int main()
{
  int Num1, Num2, Num3;
  for (int i = 0; i < 3; i++)
  {
    ReadNumbers(Num1, Num2, Num3);
    PrintNumbers(Num1, Num2, Num3);
  }
  return 0;
}