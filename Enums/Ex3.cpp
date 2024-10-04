// Exercise 3:
// write a program to ask the user to enter : Note, then print the 
// "Pass" if Note >= 50 otherwise print "Fail" 
// Ex: 45 Output: Fail.
#include <iostream>
using namespace std;
enum enNote {Pass = 1, Fail = 2};
float ReadNote(){
  float Note;
  cout << "\nEnter a Note : \n";
  cin >> Note;
  return Note;
}
enNote CheckNote(float Note){
  if (Note >= 50)
  {
    return enNote::Pass;
  }else{
    return enNote::Fail;
  }
  
}
void PrintNote(int Note){
  if(CheckNote(Note) == enNote::Pass) cout << "Pass";
  else cout<< "Fail";
}
int main(){
  for (int i = 0; i < 3; i++)
  {
    PrintNote(ReadNote());
  }
  
  return 0;
}