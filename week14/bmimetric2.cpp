#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){

  double weight, height;
  double bmi;
  string status;
  
  cout<<"Please enter weight in kilograms:"<<endl;
  cin>>weight;
  cout<<"Please enter height in meters:"<<endl;
  cin>>height;
  bmi = weight/(height*height);
  
  if(bmi<18.5){
    status = "Underweight";
  }else if(bmi>=18.5 && bmi<=24.9){
    status = "Normal";
  }else if(bmi>=25.0 && bmi<=29.9){
    status = "Overweight";
  }else{
    status = "Obese";
  }
  
  cout<<fixed<<setprecision(2);
  cout<<"BMI is: "<<bmi<<", Status is "<<status<<endl;
  return 0;
}
