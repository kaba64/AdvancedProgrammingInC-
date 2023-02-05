#include <iostream>
using namespace std;

int main(){
  char sample;

  cout<<"Enter a character: "<<endl;
  cin>>sample;
  if(sample>=48 && sample<=57){
    cout<<sample<<" is a digit."<<endl;
  }else if(sample>=65 && sample<=90){
    cout<<sample<<" is an upper case letter."<<endl;
  }else if(sample>=97 && sample<=122){
    cout<<sample<<" is a lower case letter."<<endl;
  }else{
    cout<<sample<<" is a non-alphanumeric character."<<endl;
  }
    
  return 0;
}
