#include<iostream>
using namespace std;

int main(){
    int N, last=1, secondLast=0, current=0, i;
    cout << "Enter number of terms in Fibonacci series\n";
    cin >> N;

   for(i = 0; i < N; i++){
  if(i < 2){
   current = i;
    } else {
    current = last + secondLast;
    secondLast = last;
     last = current;
    }
 cout << current << " ";

return 0;
}

