#include <iostream>
#include <string>
using namespace std;

int main(){
  string word;
  int longst, mid, i;
  
  cout<<"Enter an odd length string: "<<endl;
  getline(cin,word);
  longst = word.length();
  mid = longst/2 +1;

  cout<<"Middle character: "<<word[mid-1]<<endl;
  cout<<"First half: "<<word.substr(0,mid-1)<<endl;
  cout<<"Second half: "<<word.substr(mid,longst-1)<<endl;
  
  return 0;
}
