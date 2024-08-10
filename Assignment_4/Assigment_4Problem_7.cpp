#include <iostream>
using namespace std;
int main()
{
    int num,i,j,frq,rem;

    cout << " Input any number: ";
    cin >> num;
    for (i=0;i<10;i++)
    {
        cout << "The frequency of " <<i<< " = ";
        frq = 0;
        for(j=num;j>0;j=j/10)
        {
            rem=j%10;
            if(rem==i)
            {
                frq++;
            }
        }
        cout<<frq<<endl;
    }

return 0;
}












