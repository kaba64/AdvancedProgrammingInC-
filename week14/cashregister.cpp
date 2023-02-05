#include <iostream>
using namespace std;

int main(){
  
  double firstitem, seconditem;
  double tax;
  double baseprice, afterdiss, total;
  char card;
  
  cout<<"Enter price of the first item:"<<endl;
  cin>>firstitem;
  cout<<"Enter price of the second item:"<<endl;
  cin>>seconditem;
  cout<<"Does customer have a club card? (Y/N):"<<endl;
  cin>>card;
  cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax:"<<endl;
  cin>>tax;

  baseprice = firstitem+seconditem;
  
  if(firstitem<seconditem){
    if(card=='y'){
      afterdiss = (firstitem*0.5+seconditem)*0.9;
    }else{
      afterdiss = firstitem*0.5+seconditem;
    }
  }else{
    if(card='y'){
      afterdiss = (firstitem+seconditem*0.5)*0.9;
    }else{
       afterdiss = firstitem+seconditem*0.5;
    }
  }

  total = afterdiss*(1+tax*0.01);

  printf("Base price = %.2f\n",baseprice);
  printf("Price after discounts = %.2f\n",afterdiss);
  printf("Total price = %.2f\n",total);
  
  return 0;
}
