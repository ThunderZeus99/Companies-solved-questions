#include<iostream>
#include<string>
using namespace std;

int main()
{
  string name;
  cout << "May I know your name?" << endl;
  getline(cin, name);   // cin>>name;
  
  cout << "Welcome! " << name << endl;
  
  return 0;
}
