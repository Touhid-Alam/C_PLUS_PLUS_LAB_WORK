#include<iostream>
#include<math.h>
using namespace std;

int main() {

int num,sum=0,rem;

cout<<"Input a number : "<<endl;
cin>>num;

while(num>0) {
    rem=num%10;
    if(rem%2==1){
    sum=sum+rem;
    }
    num=num/10;

}

cout<<"The sum of digits of "<<num<<" is : "<<sum<<endl;


return 0;
}
