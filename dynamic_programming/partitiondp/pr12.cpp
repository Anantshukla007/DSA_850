/*Understanding -> Given an array of size “N” ; you can do a particular type of operation any number of times(even 0) ; the final size of the array should be as small as possible! 

In one operation ; you are allowed to pick any subarray which starts and ends at the same element and remove it from array 





-> If there is a bigger range covering the smaller range then the smaller range is of no use! 

-> You will never remove the overlapping ranges for the final best answer 

-> Final answer will be some set of ranges which are not touching each other 
*/


/*#include <bits/stdc++.h>
using namespace std;

int dp[500005][2];  // DP table
int ans[500005];    // Stores the minimum moves required
int main() {
    int n;
    cin >> n;
    
    vector<int> b(n + 1); // Array b with 1-based indexing
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }

    unordered_map<int, int> k;  // Map to store last occurrence of a number
    dp[1][0] = 1;      // Removing the first element costs 1 move
    dp[1][1] = 1e8;    // No previous element to use for optimization
    ans[1] = min(dp[1][0], dp[1][1]);  // Store the best answer for index 1

    k[b[1]] = 0;  // Track first occurrence of b[1]

    for (int i = 2; i <= n; i++) {
        dp[i][0] = 1 + ans[i - 1];  // Case when we remove the i-th element
        int v = 1e8;

        // Check if we have seen b[i] before
        if (k.find(b[i]) != k.end()) {
            v = min(v, k[b[i]]);
        }
        
        dp[i][1] = v;  // Store the best DP value when using past occurrences
        ans[i] = min(dp[i][0], dp[i][1]);

        // Update the map with the minimum answer seen so far
        if (k.find(b[i]) == k.end()) {
            k[b[i]] = ans[i - 1];  // If not found, assign ans[i-1]
        } else {
            k[b[i]] = min(k[b[i]], ans[i - 1]);  // If found, take minimum
        }
    }

    cout << min(dp[n][0], dp[n][1]) << endl;
    return 0;
}
*/



/*def min_moves(arr):
    n = len(arr)
    dp = [[float('inf')] * 2 for _ in range(n + 1)]
    ans = [0] * (n + 1)
    
    dp[1][0] = 1
    dp[1][1] = float('inf')
    ans[1] = min(dp[1][0], dp[1][1])
    
    last_seen = {}  # Dictionary to track last occurrence

    for i in range(2, n + 1):
        dp[i][0] = 1 + ans[i - 1]
        v = float('inf')

        if arr[i - 1] in last_seen:
            v = min(v, last_seen[arr[i - 1]])

        dp[i][1] = v
        ans[i] = min(dp[i][0], dp[i][1])

        if arr[i - 1] not in last_seen:
            last_seen[arr[i - 1]] = ans[i - 1]
        else:
            last_seen[arr[i - 1]] = min(last_seen[arr[i - 1]], ans[i - 1])

    return min(dp[n][0], dp[n][1])

# Example usage:
arr = list(map(int, input().split()))
print(min_moves(arr))
*/