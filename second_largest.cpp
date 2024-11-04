#include <vector>
#include <limits.h>

int getSecondLargest(std::vector<int>& arr) {
    if (arr.size() < 2) return -1; // Not enough elements for second largest

    int l = INT_MIN;  // Initialize largest as very small value
    int l2 = INT_MIN; // Initialize second largest as very small value

    for (int num : arr) {
        if (num > l) {
            l2 = l;  // Update second largest before updating largest
            l = num; // Update largest
        }
        else if (num > l2 && num < l) {
            l2 = num; // Update second largest if num is in between l2 and l
        }
    }

    return (l2 == INT_MIN) ? -1 : l2; // Check if a valid second largest was found
}