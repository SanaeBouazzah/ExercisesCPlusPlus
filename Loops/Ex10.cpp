//Exercise 10 : 
// Write a program in C++ to display the pattern using the alphabet.
//Output:
// AA
// AB
// AC
// AD
// ..
// ZZ
#include <iostream>
using namespace std;

int main(){
  for (int i = 65; i <= 90; i++)
  {
    for (int j = 65; j <= 90; j++) 
    {
       cout<<char(i) <<char(j)<<endl;
    }
    cout <<"--------------------\n";
  }
  
}