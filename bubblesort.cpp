#include <iostream>
#include<cmath>
using namespace std;
void bubblesort(int n, int arr[])
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<(n-(i+1));j++)
        {
            int temp = 0;

            if(arr[j]>arr[j+1])
            {
                temp = arr[j + 1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }

        }
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i];
    }

}
int main()
{
    int n;
    cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    bubblesort(n,arr);
}