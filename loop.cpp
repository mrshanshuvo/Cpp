#include<iostream>
using namespace std;
int main()
{
    int s=0,n;
    cout<<"Enter an Integer Number: ";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        s = s + i;
    }
    cout<<"Summation of the Series : "<<s;
}