#include <iostream>
using namespace std;
int main(){
  cout << "\n We are gonna calculate circle area inscribed in an isoles triangle"<< endl;
  float b, a, area, PI = 3.14;
  cout << "Enter b : " << endl;
  cin >> b;
  cout << endl;
  cout << "Enter a : "<< endl;
  cin >> a ;
  cout << endl;
  area = (PI * (b * b) /4) * ((2* a-b) / (2* a + b));
  cout << "The area of circle is : " << area;
  return 0;
}