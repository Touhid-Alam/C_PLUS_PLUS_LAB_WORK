#include<iostream>
#include<math.h>
using namespace std;

int main()
 {
     int i,num,sum;
     cout<<"Input a number to find it's Multiplication Table : "<<endl;
    cin>>num;


    for(i=1;i<=10;i++) {

        cout<< num << " X " <<i <<" = " <<num*i<<endl;
    }


   return 0;
 }
