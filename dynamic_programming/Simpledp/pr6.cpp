
/*Problem :- You are given an array of size “N” ; you have to start your journey at index “1” and you need to end your journey at index “N”. 

You can make jumps of size - 1 or 3 or 5 

In the array positive as well as negative numbers can be available. 

Please find the maximum sum of journey 

[5 8 3 100 -5 -5 5 10] 

*/



/*#include <bits/stdc++.h>
using namespace std;

int maxJourneySum(vector<int> &arr) {
    int n = arr.size();
    vector<int> dp(n, INT_MIN);

    dp[0] = arr[0];  // Start at index 1 (0-based index in C++)

    for (int i = 1; i < n; i++) {
        if (i - 1 >= 0) dp[i] = max(dp[i], dp[i - 1] + arr[i]);
        if (i - 3 >= 0) dp[i] = max(dp[i], dp[i - 3] + arr[i]);
        if (i - 5 >= 0) dp[i] = max(dp[i], dp[i - 5] + arr[i]);
    }

    return dp[n - 1];  // Return max sum at the last index
}

int main() {
    vector<int> arr = {5, 8, 3, 100, -5, -5, 5, 10};
    cout << maxJourneySum(arr) << endl;
    return 0;
}
*/



/*def max_journey_sum(arr):
    n = len(arr)
    dp = [-float('inf')] * n

    dp[0] = arr[0]  # Start at index 1 (0-based in Python)

    for i in range(1, n):
        if i - 1 >= 0:
            dp[i] = max(dp[i], dp[i - 1] + arr[i])
        if i - 3 >= 0:
            dp[i] = max(dp[i], dp[i - 3] + arr[i])
        if i - 5 >= 0:
            dp[i] = max(dp[i], dp[i - 5] + arr[i])

    return dp[n - 1]  # Return max sum at the last index

# Input Array
arr = [5, 8, 3, 100, -5, -5, 5, 10]
print(max_journey_sum(arr))
*/