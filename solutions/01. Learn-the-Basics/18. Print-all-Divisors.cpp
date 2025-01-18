// ******** Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and function F(i) is defined as the sum of all divisors of i. ********

// <======== Example ========>
// Input: n = 4
// Output: 15

// Input: n = 5
// Output: 21

// Input: n = 1
// Output: 1




class Solution{
  public:
    int sumOfDivisors(int n) {
        int sum = 0;
        
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                if(i%j == 0) {
                    sum += j;
                }
            }
        }
        
        return sum;
    }
};