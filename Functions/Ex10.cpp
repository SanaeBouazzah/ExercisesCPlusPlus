//Exercise 1 :
//write a program to print numbers from N to 1.
//Input : 10.             Output :10 9 8 7 6 5 4 3 2 1.
#include<iostream>
using namespace std;
void Result(int num){
  cout << "Enter a number : \n";
  cin >> num;
  cout << "You Entered : " << num << endl;
  for (int k = num; k >= 1; k--)
  {
    cout << k  << endl;
  }
}

int main(){
  int num;
  Result(num);
  return 0;
  
}