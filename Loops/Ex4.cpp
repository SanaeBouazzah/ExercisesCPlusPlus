// Exercise 4:
// write a program to sum Even numbers from 1 to N.
// Input : 10.            Output: 30;
#include<iostream>
using namespace std;
int main(){
  cout << "Hi : Enter a number : \n";
  int num, Sum = 0;
  cin >> num;
  cout << "The Number you Entered is : " << num << endl;
  for (int i = 1; i <= num; i++)
  {
    if(i % 2 == 0){
      cout << i << " + ";
      Sum += i;
    }
  }
  cout << "0 = "<< Sum;
  
}