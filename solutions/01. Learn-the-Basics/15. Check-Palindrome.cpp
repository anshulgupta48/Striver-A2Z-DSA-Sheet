// ******** Given an integer x, return true if x is a palindrome, and false otherwise. ********

// <======== Example ========>
// Input: x = 121
// Output: true

// Input: x = -121
// Output: false

// Input: x = 10
// Output: false




class Solution{
  public:
    bool isPalindrome(int x) {
        int temp = x;
        long rev = 0;

        while(temp > 0) {
            int lastDigit = temp % 10;
            temp = temp / 10;
            rev = (rev * 10) + lastDigit;
        }

        if(x == rev) {
            return true;
        }
        return false;
    }
};