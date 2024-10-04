#include <iostream> 
#include <cmath> 
using namespace std; 
int main(){
 int num;
 cout <<"Enter a number : \n";
 cin >> num;
 if(num > 0){
  cout << num << " is positive number." << endl;
 }else if(num == 0){
  cout << num << " is Zero." << endl;
 }else{
  cout << num << " is a negative number."<<endl;
 }
}