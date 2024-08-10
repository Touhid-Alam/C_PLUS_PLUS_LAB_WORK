#include<iostream>
using namespace std;

int main() {

int num,i,j,ctr,r;
cout<<"Input any number : ";
cin>>num;

for(i=0;i<10;i++){


    cout<<"The frequency of "<<i<<" = ";
    crt=0;
    for(j=num;j>num;j=j/10){

       r=j%10;
           if(r==i){
               ctr++;
              }

            cout<<ctr<<endl;
}



return 0;
}















