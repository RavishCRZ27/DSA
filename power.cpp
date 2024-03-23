//
// Created by Ravish Pandey on 22/03/24.
//
#include<iostream>
using namespace std;
int fn(int n)
{
    if(n==0)
        return 1;
    return 2*fn(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << fn(n);
}