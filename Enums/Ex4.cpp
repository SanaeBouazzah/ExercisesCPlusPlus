//Exercise 4 : 
// write a program to ask the user to enter : Note1, Note2, Note3,
// then print the average of entered Notes, and print "Pass" if average >= 50
// otherwise print "Fail".
//Ex : 90 80 70                 Output : 80 Pass
//PS : Use Enums.
#include <iostream>
using namespace std;
enum enCheck {Pass = 1, Fail = 2};
int ReadNotes(int &Note1, int &Note2, int &Note3){
  cout << "\nEnter 3 Notes : \n";
  cin >> Note1 >> Note2 >> Note3;
  return (Note1, Note2, Note3);
}
int Sum(int Note1, int Note2, int Note3){
  float sum = float (Note1 + Note2 + Note3);
  return sum;
}
float CalculAverage(int Note1, int Note2, int Note3){
  float Average = Sum(Note1, Note2, Note3) / 3;
  return Average;
}
enCheck CheckAverage(int Note1, int Note2, int Note3){
  if(CalculAverage(Note1, Note2, Note3) >= 50) return enCheck::Pass;
  else return enCheck::Fail;
}
void PrintNotes(int Note1, int Note2, int Note3){
  cout << "Your Average is : " << CalculAverage(Note1, Note2, Note3) << endl;
  if(CheckAverage(Note1, Note2, Note3) == enCheck::Pass) cout << "Pass";
  else cout << "Fail";

}


int main(){
  int Note1; int Note2; int Note3;
  ReadNotes(Note1, Note2, Note3);
  PrintNotes(Note1, Note2, Note3);
  
  return 0;
}