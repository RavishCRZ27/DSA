//
// Created by Ravish Pandey on 13/03/24.
//
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        if(a[i]<a[i-1])
        {
            int j=i;
            while(a[j]<a[j-1])
            {
                a[j]=a[j-1];
                a[j-1]=temp;
                j--;
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        cout << a[i];
    }
}