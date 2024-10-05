//Exercise 33: write a program to ask the user to enter a number and print :
//Number^2 - Number^3 - Number^4
//Example : 3.             Output : 9 - 27 - 81

#include <iostream>
using namespace std;
int Readfunc(){
  int num;
  cout << "\nEnter a number : " <<endl;
  cin >> num;
  return num;
}
void func(int num){
  int res1 = num * num;
  int res2 = res1 * num;
  int res3 = res2 * num;
  cout << "Number^2 : " << res1 << endl; 
  cout << "Number^3 : " << res2 << endl; 
  cout << "Number^4 : " << res3 << endl; 
}
int main(){
  func(Readfunc());

}