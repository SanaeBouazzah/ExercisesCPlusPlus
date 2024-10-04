// Exercise 19:
// write a program to sum Even numbers from 1 to N.
// Input : 10.            Output: 30;
//PS : using lOOP While
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
    if(i % 2 == 0){
      cout << i << " + ";
      Sum += i;
    }
    i++;
  }
    cout << "0 = "<< Sum;
  
}