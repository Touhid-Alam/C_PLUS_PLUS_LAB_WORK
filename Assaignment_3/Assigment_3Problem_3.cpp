#include<iostream>
using namespace std;

int main() {

int num,i;

cout<<"How many numbers you want to input? : ";
cin>>num;

int arr[num];

cout<<"Input the numbers : ";
for(i=0;i<num;i++){
    cin>>arr[i];
}
cout<<endl;

cout<<"The even numbers are : ";

for(i=0;i<num;i++){

      if(arr[i]%2==0){
          cout<<arr[i]<<" ";
      }
}
cout<<endl;

cout<<"The odd numbers are : ";

for(i=0;i<num;i++){

      if(arr[i]%2!=0){
          cout<<arr[i]<<" ";
      }
}


return 0;
}
