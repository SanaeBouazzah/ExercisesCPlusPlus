// Exercise 4:
//write a program to ask the user to enter : Note, then print
//"pass" if Note >= 50, otherwise print "Fail".
//Example : 45.             Ouput : Fail.
#include <iostream>
using namespace std;
void ReadNote(int &Note){
  cout <<"\nEnter Ur Note : \n";
  cin >> Note;
}
int CheckNote(int Note){
  if(Note >= 50)cout << "Pass";
  else cout << "Fail";
  return Note;
}
int main (){
  int Note;
  ReadNote(Note);
  CheckNote(Note);
}