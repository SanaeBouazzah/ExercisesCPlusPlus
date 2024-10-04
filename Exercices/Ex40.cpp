//Exercise 40 :
//Write a C++ program to enter two angles of a triangle and find the third angle.
//Example: 35, 35.                Output : 110.
#include <iostream>
using namespace std;
int main(){
  
  double FirstAngle, SecondAngle, ThirdAngle;
  cout << "\nEnter First Angle of a triangle : \n";
  cin >> FirstAngle;
  cout << "\nEnter second Angle of a triangle : \n";
  cin >> SecondAngle;
  ThirdAngle = 180 - FirstAngle - SecondAngle;
  cout << "====> The 3rd of the triangle is : " << ThirdAngle<< endl;
}