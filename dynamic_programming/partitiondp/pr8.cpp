/*P0 Given an array ; divide it into k subarrays such that value of G is maximum ; 

G = (Sum of First Subarray)*k + (Sum of Second Subarray)*k-1 + (Sum of Third Subarray)*k-2 + ………(Sum of Kth Subarray)*1 is Maximum.  it's not necessary to include all the elements in the subarrays; you are allowed to ignore some elements. but signs of +/- alternate for each odd-even numbered subarray 


*/



/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll maxGValue(vector<ll>& arr, int k) {
    int n = arr.size();
    // Build prefix sum array: prefix[i] is the sum of the first i elements (1-indexed)
    vector<ll> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }
    
    // dp[i][j] = maximum G using first i elements forming exactly j subarrays.
    // We use LLONG_MIN to represent -infinity.
    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, LLONG_MIN));
    dp[0][0] = 0; // Base case: zero elements, zero subarrays => G = 0.
    
    // i: number of elements used (from 1 to n)
    for (int i = 1; i <= n; i++) {
        // j: number of subarrays formed (cannot exceed i, and at most k)
        for (int j = 1; j <= min(i, k); j++) {
            // p is the starting index (1-indexed) for the jth subarray.
            // Since we need at least j elements to form j subarrays, p runs from i down to j.
            for (int p = i; p >= j; p--) {
                // subarray from p to i corresponds to arr[p-1] ... arr[i-1]
                ll sub_sum = prefix[i] - prefix[p - 1];
                // Determine weight: if j is odd, positive; if even, negative.
                ll weight = (j % 2 == 1) ? (k - j + 1) : -(k - j + 1);
                if (dp[p - 1][j - 1] != LLONG_MIN) {
                    dp[i][j] = max(dp[i][j], dp[p - 1][j - 1] + sub_sum * weight);
                }
            }
        }
    }
    
    return dp[n][k];
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << maxGValue(arr, k) << endl;
    return 0;
}
*/



/*def maxGValue(arr, k):
    n = len(arr)
    # Build prefix sum array: prefix[i] is sum of first i elements (1-indexed)
    prefix = [0] * (n + 1)
    for i in range(n):
        prefix[i + 1] = prefix[i] + arr[i]
        
    # dp[i][j] = maximum G value using first i elements forming exactly j subarrays.
    # Use float('-inf') as negative infinity.
    dp = [[float('-inf')] * (k + 1) for _ in range(n + 1)]
    dp[0][0] = 0  # Base case: no elements, no subarrays
    
    for i in range(1, n + 1):
        # j: number of subarrays (cannot exceed i, and at most k)
        for j in range(1, min(i, k) + 1):
            # p is the starting index for the jth subarray (1-indexed).
            # p must run from i down to j.
            for p in range(i, j - 1, -1):
                sub_sum = prefix[i] - prefix[p - 1]
                weight = (k - j + 1) if (j % 2 == 1) else -(k - j + 1)
                if dp[p - 1][j - 1] != float('-inf'):
                    dp[i][j] = max(dp[i][j], dp[p - 1][j - 1] + sub_sum * weight)
    
    return dp[n][k]

if __name__ == '__main__':
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    print(maxGValue(arr, k))
*/