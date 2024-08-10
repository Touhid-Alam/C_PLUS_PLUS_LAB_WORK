#include<iostream>
#include<math.h>
using namespace std;

int main(){

 int a,b;

  cout<<"Enter the value of first integer : "<<endl;
  cin>>a;
  cout<<"Enter the value of second integer : "<<endl;
  cin>>b;
   //inputing the value of a and b

   if(b%a==0) {       //checking if the value of a is a multiple of b using module operator
   cout<<"The first is a multiple of the second."<<endl;  //if the condition is met it will print out the first number is a multiple of the second number

   }

   else cout<<"The first is not a multiple of the second."<<endl;  /*if the condition of if statement is notmet then it will printout that
                                      the first number is not a multiple of the second number*/




return 0;

}
