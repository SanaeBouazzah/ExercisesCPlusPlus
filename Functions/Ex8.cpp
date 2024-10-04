//write a program to ask the use to enter Grade, and then print the grade 
//as follows :
//90 - 100 Print A
//80 - 89  Print B
//70 - 79  Print C
//60 - 69  Print D
//50 - 59  Print E
//otherwise  Print F
//Example : 95.                 Output : A.
#include <iostream>
using namespace std;
void ReadGrade(int &grade){
  cout << "\nEnter ur grade : \n";
  cin >> grade;
}
int PrintGrade(int grade){
  if(grade >= 90 && grade <= 100){
    cout << "A";
  }else if(grade >= 80 && grade <= 89){
    cout << "B";
  }else if(grade >= 70 && grade <= 79){
    cout << "C";
  }else if(grade >=60 && grade <= 69){
    cout << "D";
  }else if(grade >=50 && grade <= 59){
    cout << "E";
  }else{
    cout << "F";
  }
  return grade;
}
int main(){
  int grade;
  ReadGrade(grade);
  PrintGrade(grade);
}