//
// Created by Ravish Pandey on 22/03/24.
//
#include<iostream>
#include<cmath>
using namespace std;
int fact(int n)
{
    if(n ==0)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}