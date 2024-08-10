#include<iostream>
#include<math.h>
using namespace std;

int main() {

int num,sum=1,i=1;
cout<<"Your input to calculate factorial : ";
cin>>num;

if (num<0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= num;i++) {
            sum = sum*i;
        }
        cout << "Factorial of " << num << " = " <<sum;
    }



return 0;
}
