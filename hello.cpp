#include <iostream>
#include <string>
using namespace std;

int main () {
  string str;
  cout << "Enter your name\n";
  getline(cin,str);
  cout << "Hello " << str << ", my name is Will."; 
  return 0;
}

