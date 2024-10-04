//Exercise 39 :
//Write a C++ program to enter length in centimeters and convert it into meters and kilometers.
//Example: 250000.                Output : m = 2500, k = 2.5.
#include <iostream>
using namespace std;
int main(){
  
  double centimeters, meters, kilometers;
  cout << "\nEnter length centimeters : \n";
  cin >> centimeters;
  meters = centimeters / 100;
  kilometers = centimeters /100000;
  cout << "in kilometers : " << kilometers << endl;
  cout << "in meters : " << meters << endl;
}