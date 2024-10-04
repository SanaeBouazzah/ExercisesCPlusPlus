// Exercise 26 :
// write a program to calculate circle area along the circumference
//  and print it on the screen. Ex : 20. 
// Output : 31.83  Area = l^2 / 4 * PI.
#include<iostream>
using namespace std;
float ReadProgram(){
  float l;
  cout << "\nEnter l : \n";
  cin >> l;
  return l;
}
float CalculateArea(float l){
  const float PI = 3.14;
  float area = (l * l) / (4 * PI);
  return area;
}
void PrintProgram(float area){
  cout << "Area is : " << area;
}
int main(){
  PrintProgram(CalculateArea(ReadProgram()));
  PrintProgram(CalculateArea(ReadProgram()));
  return 0;
}