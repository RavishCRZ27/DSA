//
// Created by Ravish Pandey on 19/03/24.
//
#include<iostream>
using namespace std;
int getBit(int n, int pos)
{
    return ((n & (1<<pos) ) !=0);
}
int setBit (int n, int pos)
{
    return (n | (1<<pos) );
}
    int main ()
{
    cout << setBit(8, 2);
    return 0;
}