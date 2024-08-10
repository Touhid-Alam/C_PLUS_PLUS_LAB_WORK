#include<iostream>
using namespace std;

int main (){
int num;
cout<<"How many letters you want to input? : ";
cin>>num;



char arr[num];
int i;

cout<<"Input the letters : ";
for(i=0;i<num;i++){
    cin>>arr[i];
}
cout<<endl;

cout<<"The vowels are: ";

for(i=0;i<num;i++){
    if((arr[i]=='a') || (arr[i]=='e')|| (arr[i]=='i')|| (arr[i]=='o')|| (arr[i]=='u'))

     cout<<arr[i]<<" ";

}
cout<<endl;

return 0;
}
