// write a program to calculate triangle area and print it on the screen,
//the user should enter a,h.
// Example : b = 10, h = 8.   Output : 40.    A = 1/2 × b × h.
#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int b, h;
  double area;
  cout << "\nEnter Please base b : \n";
  cin >> b;
  cout << "\nEnter Please height h : \n";
  cin >> h;
  area =  (b * h) / 2;
  cout << "The Area of Triangle is : " << area;
  

}