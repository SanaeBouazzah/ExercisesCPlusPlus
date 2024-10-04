// Exercise 28 :
// write a program to calculate circle area circle described around an arbitrary 
// triangle and print it on the screen. Ex : 5 6 7. 
// Output : 40.088         P = (a + b + c) / 2.
// Area = PI * ((a * b * c ) * (a * b * c )) / 4 * sqrt(p * (p - a ) * (p - b ) * (p - c)).
#include<iostream>
#include <cmath>
using namespace std;
float ReadProgram(float &a, float &b, float &c){
  cout << "\nEnter a : \n";
  cin >> a;
  cout << "\nEnter b : \n";
  cin >> b;
  cout << "\nEnter c : \n";
  cin >> c;
  return a, b, c;
}
float CalculateArea(float a, float b, float c){
  const float PI = 3.14;
  float p = (a + b + c) / 2;
  float t = (a * b * c ) / (4 * sqrt(p * (p - a ) * (p - b ) * (p - c)));
  float area = PI * (t * t);
  return area;
}
void PrintProgram(float area){
  cout << "Area is : " << area;
}
int main(){
  float a, b, c;
  ReadProgram(a, b, c);
  PrintProgram(CalculateArea(a, b, c));
  return 0;
}