#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>& nums, int start, int end) {
    while (start <= end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    if (k == 0) return;
    reverse(nums, n - k, n - 1);
    reverse(nums, 0, n - k - 1);
    reverse(nums, 0, n - 1);
}
int main() {
    vector<int> vec;
    for (int i = 0;i < 7;i++) {
        vec.emplace_back(i + 1);
    }
    int k = 3;
    rotate(vec, k);
}