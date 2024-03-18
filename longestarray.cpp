//
// Created by Ravish Pandey on 14/03/24.
//
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int len_largest=1;
    int a=0;int b=0;
    for(int i=0;i<n-1;i++)
    {
        int diff= arr[i]-arr[i+1];
        int len=1;
        int j;
        for(j=i;j<n-1;j++)
        {
            if(j==n-2&&(arr[j]-arr[j+1]==diff))
            {
                len+=1;
                j++;
                break;
            }
            if(arr[j]-arr[j+1]==diff)
                len+=1;
            else
                break;
        }
        len_largest=max(len,len_largest);
        if(len==len_largest)
        {
            a=i;b=j;
        }
    }
    for(int i=a;i<=b;i++)
    {
        cout << arr[i] << " ";
    }
}