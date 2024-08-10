#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int num,i,j;

    cout<<"How many integers you want to input? :";
    cin>>num;
    int arr[num];

    cout<<"Input the integers : ";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<endl;

     int sum=0;
    for(i=0;i<num;i++){
        sum = 0;
    for(j=1;j<arr[i];j++){

        if(arr[i]%j==0){

            sum=sum+j;
        }

    }
    if (sum==arr[i])
            cout<<arr[i]<<" is a perfect number. ";
         else
            cout<<arr[i]<<" is not a perfect number. ";
            cout<<endl;
           }


   return 0;

}
