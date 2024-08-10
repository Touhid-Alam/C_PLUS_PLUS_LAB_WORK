
#include<iostream>
using namespace std;
int main()
{
    int num,j;
    cout<<"enter the number :";
    cin>>num;

    for(int i = 1;i<=num;i++)
    {
        for ( int j = 1 ; j <=i; j++){
              cout<<"*";
        }
        cout<<endl;
    }

   cout<<endl;
    return 0;
}
