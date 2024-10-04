// Exercise 19 :
// write a program to ask the user to enter 3 Numbers : 
// A B C then print Max number.
// Ex : 30 10 20. Output : 30.
#include <iostream>
using namespace std;
int ReadNumbers(int &A, int &B, int &C){
  cout << "\nEnter 3 Numbers : \n";
  cin >> A >> B >> C;
  return A, B, C;
}
int CheckingMax(int A, int B, int C){
  if(A > B){
    if(A > C){
      return A;
    }else{
      return C;
    }
  }else{
    if(B > C){
      return B;
    }else{
      return C;
    }
  }
}
void PrintNumbers(int max){
  cout << "The Max Numbers is : " << max;
}
int main(){
  int A; int B; int C;
  for (int i = 0; i < 3; i++)
  {
    ReadNumbers(A, B, C);
    PrintNumbers(CheckingMax(A, B, C));
  }
  
  return 0;
}