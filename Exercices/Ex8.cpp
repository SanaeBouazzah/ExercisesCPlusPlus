#include <iostream>
using namespace std;
int main(){
  cout <<"\n We are gonna calculate circle area inscribed in a square" << endl;
  float PI = 3.14, A;
  cout << "Enter A : "<< endl;
  cin >> A;
  float area = (PI * (A * A)) / 4;
  cout << "\n circle area is : " << area;
  return 0;
}