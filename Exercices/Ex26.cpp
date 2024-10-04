// write a program to calculate circle area Through diameter and print it on the screen,
//the user should enter D.
// Example : D = 10.   Output : 78.54.    A = (π x d^2)/ 4.
#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int D;
  double area, PI = 3.14;
  cout << "\nEnter Please D : \n";
  cin >> D;
  area =  (PI* pow(D,2))/ 4;
  cout << "The Area of Triangle is : " << ceil(area);
  

}