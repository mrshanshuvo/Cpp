#include<iostream>
using namespace std;

void function(int arr[])
{
    for(int i=0; i<=5; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={10,87,48,45,10,56};
    function(arr);
}