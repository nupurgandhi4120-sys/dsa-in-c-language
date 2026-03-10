#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0)
            return false;

        int rev = 0;
        int temp = x;

        while (temp > 0) {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }

        return (rev == x);
    }
};

int main() {
    Solution s;
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (s.isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
