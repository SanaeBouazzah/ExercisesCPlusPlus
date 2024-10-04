// Exerise 31 :  write a program to print numbers from N to 1
// Input : 10.    Output:10 - 9 - 8 - 7 - 6 - 5 - 4 - 3 - 2 - 1.
#include <iostream>
using namespace std;

void Readfunc(int &num){
  cout << "\nEnter num : \n";
  cin >> num;
  cout << "########################\n";
}

void PrintfuncUsingFor(int num){
  for (int i = num; i >= 1; i--)
  {
    cout << i << endl;
  }
}
void PrintfuncUsingWhile(int num){
  int counter = num + 1;
  while (counter > 1)
  {
    counter--;
    cout << counter <<endl;
  }
  
}
void PrintfuncUsingDo_While(int num){
  int counter = num + 1;
  do
  {
    counter--;
    cout << counter <<endl;
  } while (counter > 1);
  
  
}

int main(){
  int num;
  Readfunc(num);
  PrintfuncUsingFor(num);
  cout << "\n##########################\n";
  PrintfuncUsingWhile(num);
  cout << "\n##########################\n";
  PrintfuncUsingDo_While(num);
}