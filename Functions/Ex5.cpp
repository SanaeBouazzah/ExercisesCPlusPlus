//Exercise 5 :
//write a program to ask the user to enter : Note1, Note2, Note3, then
//print the average of entered Notes, and print "pass" if average >= 50,
//otherwise print "Fail", Ex: 90, 80, 70.           Output: 80. "PASS".
#include <iostream>
using namespace std;
double ReadNotes(double &Note1, double &Note2, double &Note3){
  cout << "\nEnter Note1, Note2, Note3 : \n";
  cin >> Note1 >>Note2 >>Note3;
  return Note1,Note2,Note3; 
}
double Sum(double Note1, double Note2, double Note3){
  double sum = Note1 + Note2 + Note3;
  return sum;
}
double CalculAverage(double Note1, double Note2, double Note3){
  double average = Sum(Note1,Note2,Note3) / 3;
  return average;
}
void PrintNotes(double Note1, double Note2, double Note3){
  if(CalculAverage(Note1,Note2,Note3) >= 50) cout << "PASS";
  else cout << "FAIL";
}
int main(){
  double Note1, Note2, Note3;
  ReadNotes(Note1,Note2,Note3);
  PrintNotes(Note1,Note2,Note3);
}