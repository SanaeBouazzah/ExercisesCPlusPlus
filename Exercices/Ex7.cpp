#include <iostream>
using namespace std;
int main(){
  cout << "\n We are gonna calculate circle area " << endl;
  float D, PI = 3.14, area;
  cout << "'Enter D Rayon: " << endl;
  cin >> D;
  area = (PI * (D*D)) /4;
  cout << "\n area of circle is : " << area;
  return 0;
}