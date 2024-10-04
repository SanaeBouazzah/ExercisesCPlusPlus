//Exercise 1 :
//write a program to print numbers from 1 to N.
//Input : 10.             Output : 1 2 3 4 5 6 7 8 9 10.
#include<iostream>
using namespace std;
void ReadFunc(){
  cout << "Enter a number and to print it from 1 to Number : \n";
}
int PrintFunc(int Num){
  cin >> Num;
  cout << "You Entred : " << Num<< endl;
  for (int i = 1; i <= Num; i++)
  {
    cout << i << endl;
  }
  return Num;
}

int main(){
  int Num;
  ReadFunc();
  PrintFunc(Num);
}