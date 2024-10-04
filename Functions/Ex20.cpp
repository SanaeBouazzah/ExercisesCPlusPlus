// Exercise 20 :
// write a program to calculate rectangle area and 
// print it on the screen. Ex : 10, 20.
// Output : 200   Area = a * b.


#include<iostream>
using namespace std;
float ReadNumbers(float &a, float &b){
  cout << "Enter a : \n";
  cin >> a;
  cout << "Enter b : \n";
  cin >> b;
  return a,b;
}
float CalculateArea(float a, float b){
  return a * b;
}
void PrintArea(float result){
  cout << "The Area of Rectangle is : " << result;
}
int main(){
  float a, b;
  ReadNumbers(a, b);
  PrintArea(CalculateArea(a, b));
  return 0;
}