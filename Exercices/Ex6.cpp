#include <iostream>
using namespace std;
int main(){
  cout << "\n We are gonna calculate area of triangle" << endl;
  float h, a;
  cout << "Enter h : " << endl;
  cin >> h;
  cout << "\n Enter a : "<< endl;
  cin >> a;
  float area =  (a * h)/2;
  cout <<"****************************" << endl;
  cout << "the area of triangle is : " << area;
  

  return 0;
}