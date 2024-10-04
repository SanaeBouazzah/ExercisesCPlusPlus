// Exercise 27 :
// write a program to calculate circle area inscribed  in isosceles triangle
//  and print it on the screen. Ex : 20 10. 
// Output : 47.12  Area = (PI * (b ^ 2)) / 4 * ((2 * a - b) / (2 * a + b)).
#include<iostream>
using namespace std;
float ReadProgram(float &a, float &b){
  cout << "\nEnter a : \n";
  cin >> a;
  cout << "\nEnter b : \n";
  cin >> b;
  return a, b;
}
float CalculateArea(float a, float b){
  const float PI = 3.14;
  float area = PI * ((b * b) / 4) * ((2 * a - b) / (2 * a + b));
  return area;
}
void PrintProgram(float area){
  cout << "Area is : " << area;
}
int main(){
  float a, b;
  ReadProgram(a, b);
  PrintProgram(CalculateArea(a, b));
  return 0;
}