#include<iostream>
#include<math.h>
using namespace std;

int main(){

int product_number,quantity_sold;

cout<<"What is the number of product? : "<<endl;
cin>>product_number;
cout<<"How many product was sold ? : "<<endl;
cin>>quantity_sold;

float P_1=200.75,p_2=345.50,p_3=775.75,p_4=400.35,p_5=1200.75;

switch(product_number)
{
    case 1:cout<<"The total retail value is : "<<P_1*quantity_sold<<endl;
     break;

    case 2:cout<<"The total retail value is : "<<p_2*quantity_sold<<endl;
     break;

    case 3:cout<<"The total retail value is : "<<p_3*quantity_sold<<endl;
     break;

    case 4:cout<<"The total retail value is : "<<p_4*quantity_sold<<endl;
     break;

    case 5:cout<<"The total retail value is : "<<p_5*quantity_sold<<endl;
     break;

    default :cout<<"Invalid product number."<<endl;

}



return 0;
}
