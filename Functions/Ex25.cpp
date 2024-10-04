// Exercise 25 :
// write a program to calculate circle area inscribed in a square
//  and print it on the screen. Ex : 10. 
// Output : 78.54  Area = (PI * A^2) / 4.
#include <iostream>
using namespace std;
float ReadProgram(){
  float A;
  cout << "Enter A : \n";
  cin >> A;
  return A;
}
float CalculCircle(float A){
  const float PI = 3.14;
  float area = (PI * (A * A)) / 4;
  return area;
}
void PrintProgram(float area){
  cout << "The Area is :" << area;
}
int main(){
  for (int i = 0; i < 3; i++)
  {
    PrintProgram(CalculCircle(ReadProgram()));
    cout << endl;
  }
  
  return 0;
}