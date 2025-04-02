/*Find the minimum cost to do this  : In one operation ; you must select two adjacent numbers ; and merge them to 1 number ; the cost of doing so is the sum of both numbers ; do this till the array has only 1 number left. Find the min cost to do please. 

[5,5,8] = [10,8] = [18] = cost = 10 + 18 
[5,5,8] = [5,13] = [18] = cost = 13 + 18 

Answer is 10 + 18 as it's the way with min cost. 
*/


/*#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 200005;
int b[MAX_N]; // Input array
int prefix[MAX_N]; // Prefix sum array

// Function to get sum of subarray [i, j] in O(1) time using prefix sum
int sum(int i, int j) {
    return prefix[j] - (i > 0 ? prefix[i - 1] : 0);
}

int main() {
    int n; 
    cin >> n; // Input size of array

    // Taking input and computing prefix sum (0-indexed)
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        prefix[i] = (i == 0 ? b[i] : prefix[i - 1] + b[i]);
    }

    // DP table for storing minimum merge cost
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Calculating results for subarrays of length 2
    for (int i = 0; i < n - 1; i++) {
        dp[i][i + 1] = b[i] + b[i + 1];
    }

    // DP logic for larger subarrays
    for (int length = 3; length <= n; length++) { // Length of subarray
        for (int i = 0; i <= n - length; i++) { // Start index
            int j = i + length - 1; // End index
            
            dp[i][j] = INT_MAX; // Initialize to large value
            
            for (int k = i; k < j; k++) {
                // Compute the cost of merging subarrays
                int possibility = dp[i][k] + dp[k + 1][j] + sum(i, j);
                dp[i][j] = min(dp[i][j], possibility);
            }
        }
    }

    cout << dp[0][n - 1] << endl; // Output the minimum cost to merge entire array

    return 0;
}
*/


/*def min_merge_cost(arr):
    n = len(arr)
    
    # Step 1: Compute prefix sum for fast range sum calculation
    prefix = [0] * (n + 1)
    for i in range(n):
        prefix[i + 1] = prefix[i] + arr[i]
    
    # Function to get sum of subarray arr[i:j+1] using prefix sum
    def get_sum(i, j):
        return prefix[j + 1] - prefix[i]
    
    # Step 2: Initialize DP table
    dp = [[0] * n for _ in range(n)]  # dp[i][j] represents the minimum cost to merge arr[i:j+1]

    # Step 3: Compute DP values for increasing subarray lengths
    for length in range(2, n + 1):  # Length of subarray (starting from 2 to n)
        for i in range(n - length + 1):
            j = i + length - 1
            dp[i][j] = float('inf')

            # Try every possible partition point k
            for k in range(i, j):
                cost = dp[i][k] + dp[k + 1][j] + get_sum(i, j)
                dp[i][j] = min(dp[i][j], cost)

    # Final answer: Minimum cost to merge the entire array
    return dp[0][n - 1]

# Example Usage
arr = [5, 8, 2, 10]
print(min_merge_cost(arr))  # Output: 50
*/