#include<iostream>
using namespace std;

int main() {

int num,i;
float sum=0;
float avg;
cout<<"How many students are there? ";
cin>>num;

int arr[num];

cout<<"Enter the numbers of the students : "<<endl;



for(i=0;i<num;i++)
{
     cin>>arr[i];
}


for(i=0;i<num;i++)
    {
       sum=sum+arr[i];
    }

avg=sum/num;

cout<<"The summation of the marks is : "<<sum<<endl;
cout<<"The average of the marks is : "<<avg<<endl;

return 0;
}
