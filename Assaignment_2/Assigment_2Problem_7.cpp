#include<iostream>
using namespace std;

int main(){
    int num,last=1,secLast=0,current=0,i;
    cout << "Your input is: ";
    cin >> num;

   for(i=0; i<num;i++){
   if(i<2){
    current =i;
     }
     else {
     current =last+secLast;
     secLast=last;
     last=current;
    }
 cout <<current<< " ";
   }
return 0;
}

