#include <iostream>
#include<string>
using namespace std;

bool palindrome(int i, string n) {
    if (i > n.length() / 2)
        return true;
    else if (n[i] == n[n.length() - 1 - i])
        return palindrome(i + 1, n);
    else
        return false;
}

int main() {
    string n = "";
    cin >> n;
    bool flag = palindrome(0, n);
    if (flag)
        cout << "palindrome";
    else
        cout << "Not palindrome";
    return 0;
}