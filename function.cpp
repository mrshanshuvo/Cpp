#include<iostream>
using namespace std;

void addition(int,int);

int main()
{
    addition(4,5);
}

void addition(int x, int y)
{
    int sum = x+y;
    cout<<"Summation is: "<<sum;
}