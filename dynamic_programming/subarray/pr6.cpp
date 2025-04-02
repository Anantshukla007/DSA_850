/*You are given n balloons, indexed from 0 to n - 1. Each balloon is painted with a number on it represented by an array nums. You are asked to burst all the balloons.

If you burst the ith balloon, you will get nums[i - 1] * nums[i] * nums[i + 1] coins. If i - 1 or i + 1 goes out of bounds of the array, then treat it as if there is a balloon with a 1 painted on it.

Return the maximum coins you can collect by bursting the balloons wisely.

 

Example 1:

Input: nums = [3,1,5,8]
Output: 167
Explanation:
nums = [3,1,5,8] --> [3,5,8] --> [3,8] --> [8] --> []
coins =  3*1*5    +   3*5*8   +  1*3*8  + 1*8*1 = 167
Example 2:

Input: nums = [1,5]
Output: 10
 */



 /*class Solution {
public:
    int maxCoins(vector<int>& b) {


        int n = b.size();
        vector <int> g ; 
        g.push_back(1);
        int i = 0 ; 
        while(i<n){
            g.push_back(b[i]);
            i++;
        }
        g.push_back(1);

        vector<vector<int>> dp(n+5, vector <int> (n+5,0));

        i = 1;
        while(i<=n){
            dp[i][i] = g[i-1]*g[i]*g[i+1];
            i++;
        }

        int length = 2 ; //finding for all subarrays of length givn 
        while(length<=n){

            i = 1 ; 
            int j = i + length - 1 ; 
            //i--->start point of subarray 
            //j--->end point of subarray 

            while(j<=n){

                //dp[i][j] is best answer for subarray starting from index i and ending at j
                int ii = INT_MIN ; 
                int k = i ; //k-->last element u decide to destroy  
                while(k<=j){
                    int possibility = g[i-1]*g[k]*g[j+1]  ;


                    if(i<=k-1){
                        possibility+=(dp[i][k-1]);
                    } 

                    if(k+1<=j){
                        possibility+=(dp[k+1][j]);
                    }

                    ii = max(ii,possibility);
                    k++;
                }

                dp[i][j] = ii ; 

                i++;j++;
            }
            length++;
        }
        return dp[1][n]; 

    }
};*/

 /*class Solution:
    def maxCoins(self, nums):
        # Step 1: Add virtual balloons with value 1 at the start and end
        n = len(nums)
        balloons = [1] + nums + [1]

        # Step 2: Initialize DP table
        dp = [[0] * (n + 2) for _ in range(n + 2)]  # dp[i][j] stores max coins from bursting balloons in range [i:j]

        # Step 3: Compute DP values for increasing subarray lengths
        for length in range(1, n + 1):  # Length of subarray (starting from 1 to n)
            for i in range(1, n - length + 2):  # Start index of subarray
                j = i + length - 1  # End index of subarray
                max_coins = float('-inf')

                # Try every balloon k as the last balloon to burst in [i:j]
                for k in range(i, j + 1):
                    coins = balloons[i - 1] * balloons[k] * balloons[j + 1]  # Coins from bursting balloon k

                    # Add coins from previously computed results if subarrays exist
                    if i <= k - 1:
                        coins += dp[i][k - 1]
                    if k + 1 <= j:
                        coins += dp[k + 1][j]

                    # Update maximum coins for this subarray
                    max_coins = max(max_coins, coins)

                dp[i][j] = max_coins  # Store best possible coins for subarray [i:j]

        # Return the maximum coins obtained from bursting all balloons (excluding virtual ones)
        return dp[1][n]


# Example Usage:
nums = [3, 1, 5, 8]
solution = Solution()
print(solution.maxCoins(nums))  # Output: 167
*/