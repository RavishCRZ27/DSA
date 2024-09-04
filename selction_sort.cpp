#include <iostream>
using namespace std;
int s_sort(int arr[], int n);
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    s_sort(arr, n);
    for (int i = 0;i < n;i++) {
        cout << arr[i];
    }
    return 0;
}
int s_sort(int arr[], int n) {
    for (int i = 0;i < n-1;i++) { // by the time we sort 2nd last element, array will be sorted
        int sm = arr[i];
        int p = i;
        for (int j = i + 1;j < n;j++) {
            if (arr[j] < arr[p]) {
                p = j;
            }
            swap(arr[i], arr[p]);
        }
    }
    return 0;
}