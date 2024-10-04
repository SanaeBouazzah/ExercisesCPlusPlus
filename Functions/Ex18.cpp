// Exercise 18 :
// write a program to ask the user to enter Num1, Num2, then print the max 
// number. Ex : 10 30.       Output : MAX : 30

#include <iostream>
using namespace std;
int ReadNumbers(int &Num1, int &Num2){
  cout  << "\nEnter Two numbers for Checking : \n";
  cin >> Num1 >> Num2;
  return Num1, Num2;
}
int CheckTheMax(int Num1, int Num2){
  if(Num1 > Num2) return Num1;
  else return Num2;
}
void PrintNumbers(int max){
  cout << "The Max Number is : " << max;
}
int main(){
  int Num1, Num2;
  ReadNumbers(Num1, Num2);
  PrintNumbers(CheckTheMax(Num1, Num2));
  return 0;
}