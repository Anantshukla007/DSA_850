/*Understanding :-> Given an array of Size “N”; divide it into some parts; such that each part is of size>=K and the max - min of that part should be <=M 
*/

/*#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, m, k;
    // Read n, m, k from input.
    cin >> n >> m >> k;
    
    // Use 1-indexed array: b[1..n] hold the actual numbers.
    vector<int> b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    
    // dp[i] will store the minimum number of segments needed to partition b[1..i]
    // Initialize dp[0] = 0 and all others to a large value (INT_MAX)
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    
    // Process each position i from 1 to n
    for (int i = 1; i <= n; i++) {
        // Initialize the current segment's maximum and minimum as the last element b[i]
        int big = b[i];
        int small = b[i];
        
        // Consider segments ending at i, starting from some j+1 to i.
        // We iterate j from i-1 down to 0.
        for (int j = i - 1; j >= 0; j--) {
            // Check if the current segment b[j+1 ... i] is valid:
            //   1. Its length is at least k, i.e. (i - j) >= k.
            //   2. The difference between its max and min is at least m.
            if ((big - small >= m) && ((i - j) >= k)) {
                // If valid, update dp[i] using dp[j] plus one more segment.
                dp[i] = min(dp[i], 1 + dp[j]);
            }
            // Extend the segment to include b[j]:
            // Update the maximum and minimum in the current segment.
            big = max(big, b[j]);
            small = min(small, b[j]);
        }
    }
    
    // If dp[n] is still INT_MAX, then partitioning was not possible.
    if (dp[n] == INT_MAX) 
        cout << -1 << endl;
    else 
        cout << dp[n] << endl;
    
    return 0;
}
*/


/*def minimize_partitions(arr, m, k):
    """
    Given an array 'arr', and integers 'm' and 'k', partition the array into segments
    such that each segment has:
      - a length of at least k, and
      - the difference between the maximum and minimum elements in the segment is at least m.
    Return the minimum number of segments needed to partition the array.
    If no valid partition exists, return -1.
    """
    n = len(arr)
    # Create a 1-indexed version of the array by prepending a dummy value (we ignore index 0).
    b = [0] + arr  
    # dp[i] will store the minimum number of segments needed to partition b[1..i].
    dp = [float('inf')] * (n + 1)
    dp[0] = 0  # Base case: no elements requires 0 segments.
    
    # Process positions 1 through n.
    for i in range(1, n + 1):
        # Initialize current segment's maximum and minimum to b[i].
        big = b[i]
        small = b[i]
        # Consider forming a segment ending at i, starting from some j+1.
        for j in range(i - 1, -1, -1):
            # Check if the segment b[j+1 ... i] is valid:
            #   - The length of the segment (i - j) must be at least k.
            #   - The difference between the maximum and minimum in the segment must be at least m.
            if (big - small >= m) and ((i - j) >= k):
                dp[i] = min(dp[i], 1 + dp[j])
            # Extend the current segment to include b[j]:
            big = max(big, b[j])
            small = min(small, b[j])
    
    return dp[n] if dp[n] != float('inf') else -1

# Example usage:
if __name__ == "__main__":
    # Input: n, m, k and then the array elements.
    n, m, k = map(int, input("Enter n, m, k separated by spaces: ").split())
    arr = list(map(int, input("Enter array elements separated by spaces: ").split()))
    result = minimize_partitions(arr, m, k)
    print(result)
*/