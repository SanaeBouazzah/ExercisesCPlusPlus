// Exercise 18:
// write a program to sum ODD numbers from 1 to N.
// Input : 10.            Output: 25;
//PS: Use Loop While.
#include<iostream>
using namespace std;
int main(){
  cout << "Hi : Enter a number : \n";
  int num, Sum = 0;
  cin >> num;
  int i = 1;
  cout << "The Number you Entered is : " << num << endl;

  while (i <= num)
  {
    if(!(i % 2 == 0)){
      cout << i << " + ";
      Sum += i;
    }
    i++;
  }
  cout << "0 = "<< Sum;
}