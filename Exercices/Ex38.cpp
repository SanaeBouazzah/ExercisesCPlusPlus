//Exercise 38 :
// Write a C++ program to print the code 
//(ASCII code / Unicode code etc.) of a given character.
//Example : a.           Output : 97.
#include <iostream>
using namespace std;

int main(){
  char letter;
  cout << "\nEnter a character to print code ASCII : \n";
  cin >> letter;
  cout << "The ASCII Code is : "<< int(letter)<<endl;
}