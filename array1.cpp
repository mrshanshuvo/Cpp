#include<iostream>
using namespace std;
int main()
{
    int arr[10],n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}