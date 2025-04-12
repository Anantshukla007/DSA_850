/*You are given an array of size n and an integer k, you have to partition the array into k contiguous subarrays such that the sum of bitwise OR of all the subarrays is maximised. Each element should belong to a partition.

eg -> A = [1, 2, 3, 4], k = 2

1st way: [1], [2, 3, 4] -> (1) + (2 | 3 | 4) = 8

2nd way: [1, 2], [3, 4] -> (1 | 2) + (3 | 4) = 10

3rd way: [1, 2, 3], [4] -> (1 | 2 | 3) + 4 = 7 Hence, the answer is 10.

N = 1000

1<=a[i]<=10000*/



/*#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> A(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    
    // dp[i][t] represents the maximum sum by partitioning first i elements into t segments.
    // Use -infinity for impossible cases.
    const long long NEG_INF = -1e15; // A sufficiently low value
    vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, NEG_INF));
    
    dp[0][0] = 0;  // Base: 0 elements into 0 segments gives sum 0.
    
    // Iterate over number of segments from 1 to k.
    for (int t = 1; t <= k; t++) {
        // i must be at least t (each segment non-empty)
        for (int i = t; i <= n; i++) {
            int curOR = 0;
            // Try all possible starting points for the t-th segment.
            // j runs from i down to t (so that j-1 elements are available for t-1 segments).
            for (int j = i; j >= t; j--) {
                curOR |= A[j];
                // If the previous state is valid, update dp[i][t]
                if(dp[j-1][t-1] != NEG_INF) {
                    dp[i][t] = max(dp[i][t], dp[j-1][t-1] + curOR);
                }
            }
        }
    }
    
    cout << dp[n][k] << "\n";
    return 0;
}
*/


/*def max_or_partition(arr, k):
    n = len(arr)
    # Use 0-indexing for Python. Let dp[i][t] denote the optimal result using first i elements for t partitions.
    # We'll use dp[0][0]=0 and dp[i][0] as -infinity for i > 0.
    NEG_INF = -10**15
    dp = [[NEG_INF] * (k + 1) for _ in range(n + 1)]
    dp[0][0] = 0
    
    # t = number of partitions used, from 1 to k.
    for t in range(1, k + 1):
        # i ranges from t to n (we need at least t elements for t partitions)
        for i in range(t, n + 1):
            curOR = 0
            # j from i down to t (so that first j-1 elements form t-1 partitions)
            for j in range(i, t - 1, -1):
                curOR |= arr[j - 1]  # adjusting index: arr is 0-indexed
                if dp[j - 1][t - 1] != NEG_INF:
                    dp[i][t] = max(dp[i][t], dp[j - 1][t - 1] + curOR)
    return dp[n][k]


if __name__ == '__main__':
    # Example input:
    # A = [1, 2, 3, 4], k = 2 should output 10
    A = list(map(int, input("Enter array elements separated by space: ").split()))
    k = int(input("Enter number of partitions (k): "))
    print("Maximum sum of OR values =", max_or_partition(A, k))
*/