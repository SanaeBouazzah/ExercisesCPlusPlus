#include <iostream>
using namespace std;
int main (){
  int Note1, Note2, Note3;
  int sum = Note1 + Note2 + Note3;
  float Average = sum/3;
  cout << "\nEnter your First Note : "<< endl;
  cin >> Note1;
  cout << "\n Enter your second Note : " << endl;
  cin >> Note2;
  cout << "Enter your third Note : " << endl;
  cin >> Note3;
  cout << "\nThe Average of your Notes is : " << Average;
  return 0;
}