/*
input a number and print its a "prime number" or
not a "prime number"..
*/

//Code:

#include <iostream>
#include <cmath>
using namespace std;


int main(){
int n;
cin>>n;
bool prime=0;

for(int i=2; i<=sqrt(n); i++)
{
    if (n%i==0)
    {
        cout<<"not a Prime number"<<endl;
        prime=1;
        break;
    }
}
if(prime==0)
{
    cout<<"prime"<<endl;

}
return 0;
}

