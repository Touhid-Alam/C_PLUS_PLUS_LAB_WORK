#include<iostream>
#include<math.h>
using namespace std;

int main() {

float mass,height,bmi;

cout<<"input your weight(in kilogram) : "<<endl;
cin>>mass;
cout<<"input your height(in meter) : "<<endl;
cin>>height;

bmi=mass/(height*height);

cout<<"Your B.M.I is : "<<bmi<<endl;

return 0;

}
