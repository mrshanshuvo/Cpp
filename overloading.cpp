#include<iostream>
using namespace std;

void add(int a, int b)
{
    int sum = a+b;
    cout<<sum<<endl;
}

void add(int a, int b, int c)
{
    int sum = a+b+c;
    cout<<sum<<endl;
}

int main()
{
    add(3,4);
    add(5,4,3);
}