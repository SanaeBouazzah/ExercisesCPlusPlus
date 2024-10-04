// Exercise 23 :
// write a program to calculate circle area and
//  print it on the screen. Ex : 5. 
// Output : 78.54  Area = PI * r^2.
#include<iostream>
using namespace std;
float ReadProgram(){
  float r;
  cout << "Enter r : \n";
  cin >> r;
  return r;
}
float CalculAreaOfCircle(float r){
  const float PI = 3.14;
  float area = PI * (r * r);
  return area;
}
void PrintProgram(float area){
  cout << "The Area of Circle : " << area;
}
int main(){
  float r;
  for (int i = 0; i < 3; i++)
  {
    PrintProgram(CalculAreaOfCircle(ReadProgram()));
    cout << endl;
  }
  
  return 0;
}