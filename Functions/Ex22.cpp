// Exercise 22 :
// write a program to calculate triangle area through diagonal and
//  print it on the screen. Ex : 10, 8. 
// Output : 40   Area = 1/2 * a * h.
#include <iostream>
using namespace std;
void ReadProgram(float &a, float &h){
  cout << "Enter a : \n";
  cin >> a;
  cout << "Enter h : \n";
  cin >> h;
}
float CalculAreaTriangle(float a, float h){
  float result = (a * h) / 2;
  return result;
}
void PrintProgram(float result){
  cout << "The Area is : " << result;
}
int main(){
  float a, h;
  for (int i = 0; i < 3; i++)
  {
    ReadProgram(a, h);
    PrintProgram(CalculAreaTriangle(a, h));
    cout << endl;
  }
  
  return 0;
}