#include <iostream>
#include <string>
using namespace std;

string firstword(string s){
  int i;
  i = 0;
  
  while(s[i]!= ' '){
    i++;
  }
  return s.substr(0,i);
}
