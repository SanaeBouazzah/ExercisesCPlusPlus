// Exercise 3:
// write a program to sum Even numbers from 1 to N.
// Input : 10.            Output: 30;
#include<iostream>
using namespace std;
void readfunc(int &num){
  cout <<"\n\n##################\n";
  cout << "Enter a number : \n";
  cin >> num;
  cout << "=> You Entered : "<< num << endl;
}
int printfunc(int num){
  int sum = 0;
  for(int i = 1; i <= num; i++){
    cout << i << " ";
    if(i % 2 == 0){
      sum += i;
    }
  }
  cout << "\nthe sum of even numbers is : " << sum;
  return num;
}
int func(int num){
  for (int i = 0; i < 3; i++)
  {
    readfunc(num);
    printfunc(num);
  }
  return num;
}

int main(){
  int num;
  func(num);
}