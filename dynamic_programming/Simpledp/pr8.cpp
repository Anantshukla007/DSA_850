
/*Find the number of journeys where you start from index 1 and end at index ‘n’ and the sum of every journey should be odd..

Allowed to make jumps of size 1 or 2 
5 4 2 6 

Number of odd sum journey : 
-> (5,2,6)
-> (5,4,2,6)
-> (5,4,6)

Number of even sum journey : 
-> Nothing 


2 3 5 8 10 

*/



/*#include <bits/stdc++.h>
using namespace std;

int countOddSumJourneys(vector<int> &arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(2, 0)); // dp[i][0] -> even sum, dp[i][1] -> odd sum

    // Base Case: Start from index 0
    dp[0][arr[0] % 2] = 1;

    for (int i = 1; i < n; i++) {
        if (i - 1 >= 0) {
            dp[i][0] += dp[i - 1][arr[i] % 2 == 0 ? 0 : 1]; // Add to even sum
            dp[i][1] += dp[i - 1][arr[i] % 2 == 0 ? 1 : 0]; // Add to odd sum
        }
        if (i - 2 >= 0) {
            dp[i][0] += dp[i - 2][arr[i] % 2 == 0 ? 0 : 1];
            dp[i][1] += dp[i - 2][arr[i] % 2 == 0 ? 1 : 0];
        }
    }

    return dp[n - 1][1]; // Count journeys ending at `n` with an odd sum
}

int main() {
    vector<int> arr1 = {5, 4, 2, 6};
    cout << "Odd sum journeys: " << countOddSumJourneys(arr1) << endl; // Output: 3

    vector<int> arr2 = {2, 3, 5, 8, 10};
    cout << "Odd sum journeys: " << countOddSumJourneys(arr2) << endl; // Output: 4

    return 0;
}
*/


/*def count_odd_sum_journeys(arr):
    n = len(arr)
    dp = [[0, 0] for _ in range(n)]  # dp[i][0] -> even sum, dp[i][1] -> odd sum
    
    # Base Case: Start from index 0
    dp[0][arr[0] % 2] = 1

    for i in range(1, n):
        if i - 1 >= 0:
            dp[i][0] += dp[i - 1][0 if arr[i] % 2 == 0 else 1]
            dp[i][1] += dp[i - 1][1 if arr[i] % 2 == 0 else 0]
        if i - 2 >= 0:
            dp[i][0] += dp[i - 2][0 if arr[i] % 2 == 0 else 1]
            dp[i][1] += dp[i - 2][1 if arr[i] % 2 == 0 else 0]

    return dp[n - 1][1]  # Count journeys ending at `n` with an odd sum

# Test cases
arr1 = [5, 4, 2, 6]
print("Odd sum journeys:", count_odd_sum_journeys(arr1))  # Output: 3

arr2 = [2, 3, 5, 8, 10]
print("Odd sum journeys:", count_odd_sum_journeys(arr2))  # Output: 4
*/