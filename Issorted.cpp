//
// Created by Ravish Pandey on 23/03/24.
//
#include<iostream>
using namespace std;
int issorted(int a[],int i)
{
    if(i==1||i==0)
        return 1;
   if(a[i-2]>a[i-1])
       return 0;
    issorted(a,i-1);
}
int main()
{
    int n;
    cin >> n;int arr[n];
    for (int i =0;i<n;i++)
        cin >> arr[i];
    cout << issorted(arr,n);
}