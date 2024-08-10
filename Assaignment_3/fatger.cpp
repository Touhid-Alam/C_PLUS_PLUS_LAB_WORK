#include<iostream>
using namespace std;



int main() {



int num,i,low,seclow;



cout<<"How many numbers you want to input ? : ";
cin>>num;



int arr[num];



cout<<"Input the numbers: ";



for(i=0;i<num;i++){



cin>>arr[i];
}
if(arr[0]<arr[1]){
low=arr[0];
seclow=arr[1];
}
else if(arr[0]>arr[1]){
low=arr[1];
seclow=arr[0];
}
else{
low = arr[0];
seclow = -1;
}
cout << low << " " << seclow << endl;
for(i=2;i<num;i++)
{
if(arr[i]<low)
{
seclow=low;
low=arr[i];
}
else if((seclow==-1 || arr[i]<seclow) && arr[i]!=low){
seclow=arr[i];
}
}
cout<<"The lowest number is : "<<low<<endl;
if(seclow==-1){
cout << "There is no second lowest number in the array." << endl;
}
else
cout<<"The second lowest number is : "<< seclow <<endl;




return 0;
}
