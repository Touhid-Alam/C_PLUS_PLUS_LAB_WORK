#include<iostream>
using namespace std;

int main()
{
    int num,sum=1;
    cout<<"Your input to calculate factorial : ";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        sum=sum*i;

    }

    cout<<"Factorial of "<<num<<" is "<<sum;

  return 0;
}
