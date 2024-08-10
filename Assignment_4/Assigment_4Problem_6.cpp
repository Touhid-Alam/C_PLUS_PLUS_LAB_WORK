#include<iostream>
#include<math.h>
using namespace std;

int main(){
int dec_num,r;
string hex_dec;
char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

cout<<"Input a decimal number : ";
cin>>dec_num;

while(dec_num>0){

    r=dec_num%16;
    hex_dec=hex[r]+hex_dec;
    dec_num=dec_num/16;
}

cout<<"The hexadecimal number is : "<<hex_dec<<endl;



return 0;
}
