#include<iostream>
#include<math.h>
using namespace std;
int main(){
   float kilo_drive,cost_per_liter,kilometer_per_liter,parking_fee,toll_fee,total;

    cout<<"How many kilometer did you drive? : ";
    cin>>kilo_drive;
   cout<<endl<<"Price of petrol cost per litter : ";
   cin>>cost_per_liter;
   cout<<endl<<"How many kilometer drove per liter? : ";
   cin>>kilometer_per_liter;
   cout<<endl<<"What is the parking fee? : ";
   cin>>parking_fee;
   cout<<endl<<"What is the toll fee? : ";
   cin>>toll_fee;

   total=(kilo_drive/kilometer_per_liter)*cost_per_liter+parking_fee+toll_fee;


   cout<<"Total cost per day is : "<<total<<endl;


return 0;
}
