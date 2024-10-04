#include <iostream>
using namespace std;

struct stInfo{
  string FirstName;
  string LastName;
  int Age;
  string Phone;
  string CodePostal;
};
void Question(int &num){
  cout << "\nEnter How Many Persons ur gonna add : \n";
  cin >> num;
}
void ReadInfo(stInfo &person){
  cout<<"\n#######################\n";
  cout << "Enter ur firstName : ";
  cin >> person.FirstName;
  cout << "Enter ur LastName : ";
  cin >> person.LastName;
  cout << "Enter ur Age : ";
  cin >> person.Age;
  cout << "Enter ur Phone : ";
  cin >> person.Phone;
  cout << "Enter ur CodePostal : ";
  cin >> person.CodePostal;
}
void PrintInfo(stInfo person){
  cout << "   -FirstName  : " << person.FirstName<<endl;
  cout << "   -LastName   : " << person.LastName<<endl;
  cout << "   -Age        : " << person.Age<<endl;
  cout << "   -Phone      : " << person.Phone<<endl;
  cout << "   -CodePostal : " << person.CodePostal<<endl;
}   
int EnterInfo(stInfo Persons[], int num){
  for (int i = 1; i <= num; i++)
  {
    ReadInfo(Persons[i]);
  }
  cout<<"\n\n#######################\n";
  for (int k = 1; k <= num; k++)
  {
    cout << "\n==> Card Person's " << k << " : " << endl;
    PrintInfo(Persons[k]);
  }
  
  return Persons, num;
  
}
int main()
{
  int num;
  Question(num);
  stInfo Persons[100];
  EnterInfo(Persons, num);
}