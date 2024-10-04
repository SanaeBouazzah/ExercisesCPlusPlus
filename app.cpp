#include <iostream>
#include <string>
#include <cmath>
#include <vector>
// // getline(cin, name);
// // cin.ignore(1, '\n');
// // to get a global value ::x;
// // int x = 10; by value;
// // int &x = 10; by refernce;
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

///declaration of variables inside of function or parameters of function?