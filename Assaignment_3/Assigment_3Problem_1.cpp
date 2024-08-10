#include<iostream>
using namespace std;

int main() {

int num,i;
cout<<"How many number you want to input and print as reverse order? : ";
cin>>num;

int arr[num];

cout<<"Input the numbers: ";

for(i=0;i<num;i++)
{
    cin>>arr[i];

}

cout<<"The numbers in reversed order is : ";

for(i=num-1;i>=0;i--)
{
    cout<<arr[i]<<" ";

}

return 0;
}
