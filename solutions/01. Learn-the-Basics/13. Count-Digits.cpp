// ******** Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits. A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0). Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined. ********

// <======== Example ========>
// Input: n = 12
// Output: 2

// Input: n = 2446
// Output: 1

// Input: n = 23
// Output: 0




class Solution{
  public:
    int evenlyDivides(int n) {
        int temp = n;
        int count = 0;
        
        while(temp > 0) {
            int lastDigit = temp % 10;
            temp = temp / 10;
            
            if(lastDigit != 0 && n % lastDigit == 0) {
                count++;
            }
        }
        
        return count;
    }
};