#include<iostream>
using namespace std;

int main()
{
    int num,i;
    cout<<"How many numbers you want to input? : ";
    cin>>num;
    int arr[num];
    cout<<"Enter the numbers : ";
    for(i=0;i<num;i++){

        cin>>arr[i];
    }
    cout<<endl;

    for(i=0;i<num;i++){
        if(arr[i]==0 || arr[i]==1){
            cout<<arr[i]<<" is not a prime number."<<endl;
        }
    }

    int j;
    for(i=0;i<num;i++){
       for(j=2;j<arr[i];j++){
          if(arr[i]%j==0){
             cout<<arr[i]<<" is not a prime number."<<endl;
          break;
        }
       }
       if(j==arr[i]) cout<<arr[i]<<" is a prime number."<<endl;
     }
    return 0;
}
