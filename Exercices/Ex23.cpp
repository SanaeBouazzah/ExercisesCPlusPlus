// write a program to calculate rectangle Area Through diagonal and side area of rectangle 
// and print it on the screen, the user should enter a,d.
// Example : l = 5, d = 40.   Output : 198.431.    Area = l × √(d2 - l2).
#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int l, d;
  double area;
  cout << "\nEnter Please length l : \n";
  cin >> l;
  cout << "\nEnter Please diagonal d : \n";
  cin >> d;
  area = l * sqrt(pow(d,2) - pow(l,2));
  // area = l * sqrt((d * d) - (l * l));
  cout << "The Area of Rectangle is : " << area;

}