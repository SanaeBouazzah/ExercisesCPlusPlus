// Exercise 3:
// write a program to sum ODD numbers from 1 to N.
// Input : 10.            Output: 25;
#include<iostream>
using namespace std;
int Read(int num){
  cout << "Enter a number : \n";
  cin >> num;
  cout << "* You Entered : " << num << endl;
  return num;
}
void CalculODD(int num){
  int sum = 0;
 for (int i = 1; i <= num; i++)
 {
  cout << i << endl;
  if(!(i % 2 == 0)){
    sum += i;
  }
 }
 cout << "******************\n";
 cout << "Sum of ODD numbers is : " << sum;
}
int main(){
  int num = Read(num);
  CalculODD(num);
}