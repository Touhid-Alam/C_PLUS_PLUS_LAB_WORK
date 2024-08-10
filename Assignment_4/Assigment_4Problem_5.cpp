#include<iostream>
using namespace std;

int main()
{
	int i,j,k,rows;

    cout<<"Input number of rows(half of the diamond): ";
    cin>>rows;

    for(i=1;i<=rows;i++)
    {
    	for(j=1;j<=rows-i;j++)
		{
        cout<<" ";
        }
           for(k =1;k<=i*2-1;k++)
        {
        cout<<"*";
        }
        cout<<endl;
    }

    for(i=rows-1;i>0;i--)
{
    	for(j=1;j<=rows-i;j++)
		{
        cout<<" ";
        }
          for(k=1;k<=i*2-1;k++)
        {
        cout<<"*";
        }
        cout<<endl;
}

 	return 0;
}
