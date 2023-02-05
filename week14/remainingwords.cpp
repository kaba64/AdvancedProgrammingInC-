#include <iostream>
#include <string>
using namespace std;

string remainingwords(string s){
  int i, end;
  i = 0;
  
  while(s[i]!= ' '){
    i++;
  }
  end = s.length()-1;
  return s.substr(i+1,end);
}
