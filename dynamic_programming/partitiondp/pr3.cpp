/*Problem Statement:

You are given an array of integers arr of size n and an integer k. Your goal is to partition the array into k contiguous subarrays such that the sum of the maximum element of each subarray is minimized.

Cost of a partition: For each subarray (or partition), its cost is the maximum value in that subarray.

Objective: Find a way to split the array into exactly k parts so that the sum of the maximum elements of these parts is as small as possible.*/


/*#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int minimizeMaxSum(vector<int>& arr, int n, int k) {
    // dp[i][j] -> minimum sum of maximum elements for first i elements and j partitions
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, INT_MAX));

    // Base case: If we have 0 elements, the sum is 0 regardless of the number of partitions
    for (int i = 0; i <= k; i++) {
        dp[0][i] = 0;
    }

    // dp[i][k] -> best way to divide array of size i into k parts
    for (int i = 1; i <= n; i++) {
        for (int parts = 1; parts <= k; parts++) {
            int currentMax = 0;
            // Fix the last j elements for the current partition
            for (int j = i; j >= 1; j--) {
                currentMax = max(currentMax, arr[j - 1]);
                // dp[j-1][parts-1] refers to the minimum sum for the previous part
                if (dp[j - 1][parts - 1] != INT_MAX) {
                    dp[i][parts] = min(dp[i][parts], currentMax + dp[j - 1][parts - 1]);
                }
            }
        }
    }

    // Return the result for the entire array divided into k partitions
    return dp[n][k];
}

int main() {
    int n, k;
    cin >> n;
    cin >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = minimizeMaxSum(arr, n, k);
    cout << "Minimum sum of maximum elements of each partition: " << result << endl;

    return 0;
}
*/