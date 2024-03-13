#include <iostream>
#include<cmath>
using namespace std;
int Binarysearch(int n,int arr[],int k)
{
    int s=0;int e=n;
    while(s<=e)
    {
        int mid = (s+e) /2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else
            e=mid-1;
    }
    return -1;

}

int main()
{
    int n;
    int k;
    cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    cout << Binarysearch(n,arr,k);
    return 0;
}

