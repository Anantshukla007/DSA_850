/*You are given an array A consisting of N integers and a special number K. You have to divide the array into K non-empty subarrays. The sum of elements of the P ^ t 3 ^ (rd) 5 ^ (th) 7 ^ (th) (odd) subarrays is the price at which you buy the stocks and the sum of elements of the 2 ^ (nd) 4 ^ (th) 6 - ^ th , 8 ^ (th) (even) subarrays is the price at which you sell the stocks. The profit of this transaction would be equal to = selling price - buying price, where the selling price is the sum of elements of the even indexed subarrays and the buying price is the sum of elements of the odd indexed subarrays.
Task
Determine the maximum profit you can make by buying and selling the stocks in an optimal manner.


*/

/*#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &A, int K) {
    int N = A.size();
    vector<vector<int>> dp(N + 1, vector<int>(K + 1, INT_MIN));
    vector<int> prefixSum(N + 1, 0);

    // Compute prefix sums for quick range sum calculations
    for (int i = 1; i <= N; i++) {
        prefixSum[i] = prefixSum[i - 1] + A[i - 1];
    }

    // Base case: No elements, profit is 0
    dp[0][0] = 0;

    // DP transition
    for (int j = 1; j <= K; j++) {  // Number of subarrays
        for (int i = 1; i <= N; i++) {  // First 'i' elements
            for (int p = 0; p < i; p++) {  // Previous split point
                int subarraySum = prefixSum[i] - prefixSum[p];  // Sum of (p+1 to i)
                int profitFactor = (j % 2 == 0) ? 1 : -1;  // Even => sell, Odd => buy
                if (dp[p][j - 1] != INT_MIN) {  // Valid previous partition
                    dp[i][j] = max(dp[i][j], dp[p][j - 1] + profitFactor * subarraySum);
                }
            }
        }
    }

    return dp[N][K];  // Maximum profit using all elements and K partitions
}

int main() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int K = 3;
    cout << "Maximum Profit: " << maxProfit(A, K) << endl;
    return 0;
}
*/


/*def max_profit(A, K):
    N = len(A)
    
    # Prefix sum to quickly get subarray sums
    prefix_sum = [0] * (N + 1)
    for i in range(1, N + 1):
        prefix_sum[i] = prefix_sum[i - 1] + A[i - 1]
    
    # DP table initialized to a very small number
    dp = [[float('-inf')] * (K + 1) for _ in range(N + 1)]
    
    # Base case: No elements, zero profit
    dp[0][0] = 0

    # Fill DP table
    for j in range(1, K + 1):  # Number of subarrays
        for i in range(1, N + 1):  # Consider first i elements
            for p in range(i):  # Try different partition points
                subarray_sum = prefix_sum[i] - prefix_sum[p]
                profit_factor = 1 if j % 2 == 0 else -1  # Even => sell, Odd => buy
                if dp[p][j - 1] != float('-inf'):  # Valid previous partition
                    dp[i][j] = max(dp[i][j], dp[p][j - 1] + profit_factor * subarray_sum)
    
    return dp[N][K]  # Maximum profit using all elements and K partitions

# Example Usage
A = [1, 2, 3, 4, 5, 6, 7, 8, 9]
K = 3
print("Maximum Profit:", max_profit(A, K))
*/