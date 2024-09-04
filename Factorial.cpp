//
// Created by Ravish Pandey on 22/03/24.
//
#include<iostream>
#include<cmath>
using namespace std;
int fact(int n);
int main() {
    int n = 0;
    cin >> n;
    cout << fact(n);
    return 0;
}
int fact(int n) {
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}