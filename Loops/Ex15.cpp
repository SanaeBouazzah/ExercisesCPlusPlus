//Exercise 15 :
// Write a program in C++ to display a pattern like a right angle triangle with Numbers.
// input number of rows: 10
// Output : 
// 12345678910
// 2345678910
// 345678910
// 45678910
// 5678910
// 678910
// 78910
// 8910
// 910
// 10
#include <iostream>
using namespace std;

int main(){
  for (int i = 1; i <=10; i++)
  {
    for (int j = i; j <= 10 ; j++)
    {
      cout << j;
    }
    cout << endl;
    
  }
  
}