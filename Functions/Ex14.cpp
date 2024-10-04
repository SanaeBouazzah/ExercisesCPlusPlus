// Exercise 3:
// write a program to ask the user to enter number and M and then print the number^M.
// Input : 2, 4.            Output: 16
#include<iostream>
using namespace std;
void func(int &num, int &M){
  cout << "\n\n###################\n";
  cout << "Enter a number : \n";
  cin >> num;
  cout << "Enter a Power of number : \n";
  cin >> M;
  cout << "=> You entered : "<< num <<"^"<< M<< endl;
}
int Printfunc(int num, int M){
  int result = 1;
  for (int i = 1; i <= M; i++)
  {
    result *= num;
  }
  cout << "\n## The result is : "<< result;
  return num;
}
int RepeatFunc(int num, int M){
  for (int i = 0; i < 3; i++)
  {
    func(num, M);
    Printfunc(num, M);
  }
  return num, M;
}
int main(){
  int num, M;
  RepeatFunc(num,M);
}