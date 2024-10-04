// Exercise 21 :
// write a program to calculate rectangle area through diagonal and
// side area of rectangle and  print it on the screen. Ex : 5, 40.
// Output : 198.431   Area = a * sqrt(d^2 - a^2).
#include<iostream>
#include<cmath>
using namespace std;
float ReadProgram(float &a, float &d){
  cout << "Enter please a : \n";
  cin >> a;
  cout << "Enter please d : \n";
  cin >> d;
  return a, d;
}
float EquationOfArea(float a, float d){
  float result = a * sqrt((d * d) - (a * a));
  return result;
}
void PrintProgram(float result){
  cout << "The Area of Rectangele : " << result;
}
int main (){
  float a, d;
   for (int  i = 0; i < 3; i++)
   {
    ReadProgram(a, d);
    PrintProgram(EquationOfArea(a, d));
    cout << endl;
   }
   
  return 0;
}