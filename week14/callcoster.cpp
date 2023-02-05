#include <iostream>
#include <string>
using namespace std;

int main(){
  int time, hour, minute;
  int duration;
  string day;
  double cost;
  
  cout<<"Enter the day the call started at: "<<endl;
  cin>>day;
  cout<<"Enter the time the call started at (hhmm): "<<endl;
  cin>>time;
  hour = time/100;
  minute = time-hour*100;
  cout<<"Enter the duration of the call (in minutes): "<<endl;
  cin>>duration;

  if(day=="Mon" || day=="Tue" || day=="Wed" || day=="Thr" || day=="Fri"){
    if(hour>=8 && (hour<18 ||(hour==18 && minute==0))){
      cost = 0.4*duration;
    }else{
      cost = 0.25*duration;
    }
  }else{
    cost = 0.15*duration;
  }

  printf("This call will cost $%.2f\n",cost);
  return 0;
}
