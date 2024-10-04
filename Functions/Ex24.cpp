// Exercise 24 :
// write a program to calculate circle area  through diameter and
//  print it on the screen. Ex : 10. 
// Output : 78.54  Area = (PI * D^2) / 4.
#include <iostream>
using namespace std;
float ReadProgram(){
  float D;
  cout << "Enter D : \n";
  cin >> D;
  return D;
}
float CalculCircle(float D){
  const float PI = 3.14;
  float area = (PI * (D * D)) / 4;
  return area;
}
void PrintProgram(float area){
  cout << "The Area is : " << area;
}
int main(){
  for (int i = 0; i < 3; i++)
  {
    PrintProgram(CalculCircle(ReadProgram()));
    cout << endl;
  }
  
  return 0;
}