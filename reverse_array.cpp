#include <iostream>
using namespace std;

void reverse(int arr[], int s, int e) {
    while (s < e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main() {
    int n = 0;
    cin >> n;
    int arr[n];
    int arr2[n];
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    reverse(arr, 0, n - 1);
    for (int i = 0;i < n;i++) {
        cout << arr[i];
    }
    return 0;
}