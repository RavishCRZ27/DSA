#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& vec, int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    // Merging the two halves
    while (left <= mid && right <= high) {
        if (vec[left] <= vec[right]) {
            temp.emplace_back(vec[left]);
            left++;
        } else {
            temp.emplace_back(vec[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.emplace_back(vec[left]);
        left++;
    }

    while (right <= high) {
        temp.emplace_back(vec[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        vec[i] = temp[i - low];
    }
}

void merge_sort(vector<int>& vec, int low, int high) {
    if (low < high) { 
        int mid = (low + high) / 2;
        merge_sort(vec, low, mid);      
        merge_sort(vec, mid + 1, high); 
        merge(vec, low, mid, high); 
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    merge_sort(vec, 0, n - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}