// ******** Given an integer choice denoting the choice of the user and a list containing the single value R or two values L and B depending on the choice. If the user's choice is 1, calculate the area of the circle having the given radius(R). Else if the choice is 2, calculate the area of the rectangle with the given length(L) and breadth(B). ********
// Note --> A list arr[], containing the single value R or the two values L and B, as input parameters. Return the area of the desired geometrical figure. Use Math.PI for the value of pi.

// <======== Example ========>
// Input: choice = 1, R = 5
// Output: 78.53981633974483

// Input: choice = 2, L = 5, B = 10
// Output: 50


// Expected Time Complexity ==> O(1)
// Expected Auxiliary Space ==> O(1)




class Solution{
  public:
    double switchCase(int choice, vector<double> &arr) {
        switch(choice) {
            case 1:
                return M_PI*arr[0]*arr[0];
                break;
            case 2:
                return arr[0]*arr[1];
                break;
        }
    }
};