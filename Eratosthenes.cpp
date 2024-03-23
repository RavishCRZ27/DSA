// //
// // Created by Ravish Pandey on 19/03/24.
// //
// #include<iostream>
// #include<cmath>
// #include<string>
// using namespace std;
//
// int main()
// {
//     int a,b;
//     cin >>a >> b;
//     int n = b-a;
//     int arr[n];
//     int l=0;
//     for(int i =a;i<=b;i++)
//     {
//         arr[l]=i;
//         l++;
//     }
//     cin.ignore();
//     for(int i =0;i<n;i++)
//     {
//         if (arr[i]==0 || arr[i]==1)
//             continue;
//
//         if(pow(arr[i],2)>= arr[n-1])
//             break;
//
//         for(int j =i+1;j<n;j++)
//         {
//             if(arr[j]%arr[i]==0)
//             {
//                 arr[j]= 0;
//             }
//         }
//     }
//     for(int i =0;i<n;i++)
//     {
//         if(arr[i]!=0)
//             cout << arr[i] << " ";
//     }
//
// }
