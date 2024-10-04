#include <iostream>
using namespace std;
int main(){
  int num1, num2, num3;
  cout << "\nEnter your number1 : " <<endl;
  cin >> num1;
  cout << "Enter your number2 : " << endl;
  cin >> num2;

  num3 = num1;
  num1 = num2;
  num2 = num3;
  cout << endl << "Second Number Has changed to number 1 : "  <<num1 << endl << "First Number Has Changed to number 1 : "<< num2;
  return 0;

}