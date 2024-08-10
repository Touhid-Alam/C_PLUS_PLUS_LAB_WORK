#include<iostream>
using namespace std;

int main(){
int i,j,k;
cout<<"Create and display three digit number using 1,2,3,4. "<<endl;
cout<<"The three digit numbers are: "<<endl;
int amount=0;
for(i=1;i<=4;i++){
    for(j=1;j<=4;j++){
      for(k=1;k<=4;k++){
      if(k!=i&&k!=j&&i!=j)
        {
            amount ++;
            cout<<i<<j<<k<<" ";
           }
        }
      }
   }

cout<<endl;
cout<<"Total number of the three digit number is : "<<amount;
return 0;
}
