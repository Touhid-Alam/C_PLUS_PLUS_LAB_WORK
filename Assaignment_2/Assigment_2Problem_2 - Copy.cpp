#include<iostream>
using namespace std;
int main()
{
    int num,rem,neww=1,bin=0;
    cout<<"Input a decimal number : ";
    cin>>num;
    while(num!=0)
    {
        rem=num%2;
        bin=bin+(rem*neww);
        neww=neww*10;
        num=num/2;
    }
    cout<<"The binary number is  : "<<bin;


    return 0;
}
