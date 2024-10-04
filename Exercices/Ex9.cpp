#include <iostream>
using namespace std;
int main(){
  cout << "\n we are gonna calculate circle area along the circumference " << endl;
  float l, PI = 3.14;
  cout << "Enter l : " << endl;
  cin >> l ;
  float area = (l * l) / (4 * PI);
  cout << "\n Circle area is : " << area ;


  
  return 0;
}