//write a program to ask the user to enter : Note1, Note2, Note3, then
//print the average of entered Notes, and print "pass" if average >= 50,
//otherwise print "Fail", Ex: 90, 80, 70.           Output: 80. "PASS".
#include <iostream>
using namespace std;
int main(){
  double Note1, Note2, Note3;
  cout << "\nEnter UR Three notes : \n";
  cin >> Note1 >> Note2 >> Note3;
  double average;
  average = (Note1 + Note2 + Note3) / 3;
  cout << "Average of ur Notes is : " << average;

}