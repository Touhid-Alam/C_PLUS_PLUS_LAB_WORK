#include<iostream>
using namespace std;

int main() {

int num,i,lar,seclar;
cout<<"How many number you want to input? : ";
cin>>num;

int arr[num];

cout<<"Enter the numbers : ";
for(i=0;i<num;i++){
    cin>>arr[i];
}
cout<<endl;

if(arr[0]>arr[1]){
    lar=arr[0];
    seclar=arr[1];
}
else{lar=arr[1];
    seclar=arr[0];}

for(i=2;i<num;i++)
  {
    if(arr[i]>lar){
     seclar=lar;
     lar=arr[i];
    }

else if (arr[i]>seclar && arr[i]!=lar)
{
        seclar=arr[i];
      }
  }
   cout<<"The largest number is : "<<lar<<endl;
   cout<<"The second largest number is : "<<seclar<<endl;


return 0;
}

