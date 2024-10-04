// Exerise 30 :  write a program to print numbers from 1 to N.
// Input : 10.    Output: 1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9 - 10.
#include <iostream>
using namespace std;
int Readfunc(){
  int num;
  cout << "\nEnter num :\n";
  cin >> num;
  cout << "\n##############################\n";
  return num;
}

void PrintfuncUsingWhile(int num){
  int counter = 0;
  while (counter < num)
  {
    counter++;
    cout << counter <<endl;
  }
  
}

void PrintfuncUsingFor(int num){
  for (int i = 1; i <= num; i++)
  {
    cout << i << endl;
  }
}

void PrintfuncUsingDo_While(int num){
  int counter = 0;
  do
  {
    counter++;
    cout << counter <<endl;
  } while (counter < num);
  
  
}

int main(){
  int num = Readfunc();
  PrintfuncUsingWhile(num);
  PrintfuncUsingFor(num);
  PrintfuncUsingDo_While(num);
}
