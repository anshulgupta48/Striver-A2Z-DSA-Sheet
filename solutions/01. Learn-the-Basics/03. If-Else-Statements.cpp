// ******** Given two integers, n and m. The task is to check the relation between n and m. Return "lesser" if n < m,  "equal" if n == m, and "greater" if n > m. ********

// <======== Example ========>
// Input: n = 4, m = 8
// Output: lesser

// Input: n = 8, m = 8
// Output: equal

// Input: n = 8, m = 4
// Output: greater




class Solution{
  public:
    string compareNM(int n, int m){
        if(n < m) {
            return "lesser";
        }
        else if(n == m) {
            return "equal";
        }
        else {
            return "greater";
        }
    }
};