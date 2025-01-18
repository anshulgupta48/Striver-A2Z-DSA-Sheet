// ******** Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function inputs two integers a and b and returns a list containing their LCM and GCD. ********

// <======== Example ========>
// Input: a = 5 , b = 10
// Output: [10, 5]

// Input: a = 14 , b = 8
// Output: [56, 2]

// Input: a = 1 , b = 1
// Output: [1, 1]


// Expected Time Complexity ==> O(log(min(a, b))
// Expected Auxiliary Space ==> O(1)




class Solution{
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int lcm;
        int gcd;
        
        for(int i = min(a, b); i >= 1; i--) {
            if(a%i == 0 && b%i == 0) {
                gcd = i;
                break;
            }
        }
        
        lcm = (a * b) / gcd;
        return {lcm, gcd};
    }
};