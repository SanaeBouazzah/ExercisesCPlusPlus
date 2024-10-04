// write a program to calculate Area of circle and print it on the screen,
//the user should enter r.
// Example : 5.   Output : 78.54.    A = π r².
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int r;
  double area, PI = 3.14;
  cout << "\nEnter Please radius r : \n";
  cin >> r;
  area = PI * pow(r,2);
  cout << "The Area of Circle is : " << area <<endl;
  cout << "\nTo make area natural number : " << ceil(area);
}