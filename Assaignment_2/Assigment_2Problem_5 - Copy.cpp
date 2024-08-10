#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num1,num2,sum=0;

cout<<"First number : ";
cin>>num1;
cout<<"Second number : ";
cin>>num2;
int i;
cout<<"Sum of even numbers between "<<num1<<" and "<<num2<<" is : ";
for(i=num1;i<=num2;i++){
   if(i%2==0)
    sum=sum+i;

}

 cout<<sum;

 return 0;
}
