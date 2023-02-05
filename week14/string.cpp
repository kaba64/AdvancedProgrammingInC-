#include <iostream>
#include <string>
using namespace std;

int main(){
  string st1;

  st1 = "abcdefj";
  cout<<st1[0]<<st1[1]<<st1[2]<<st1[3]<<endl;
  cout<<st1<<endl;
  cout<<st1.substr(2,3)<<endl;
  return 0;
}
