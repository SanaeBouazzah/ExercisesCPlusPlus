//Exercise 16: 
// write a program to ask the user to enter : Number then print the half of
// the number. Ex: 60. Output : Half of the 60 is 30.

#include <iostream>
using namespace std;
int ReadNumber(){
  int num;
  cout << "\nEnter the number : \n";
  cin >> num;
  return num;
}
float CalculHalfNumber(int num){
  float result = float(num) / 2;
  return result;
}
void PrintNumber(int num){
  cout << "The Half number " << num << " is : " << CalculHalfNumber(num);
}

int main()
{
  cout << "\n";
  cout << "\n###########################\n";
  cout << "You have 3 times iterations ";
  cout << "\n############################\n";
  for (int i = 0; i < 3; i++)
  {
    PrintNumber(ReadNumber());
  }
  
  return 0;
}