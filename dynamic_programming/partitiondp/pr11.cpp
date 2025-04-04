/* possible to divide the array in a partition such that each part is good. 
i…………….j] is good if and only if := b[i] = abs(i-j)  Real Question :- Minimum number of moves to make sure your array can be divided into good parts. In 1 move you can remove any number ;*/

/*#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> b(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
    }

    vector<int> dp(n + 2, INT_MAX);  // DP array initialized with large values

    dp[n + 1] = 0;  // Base case: no moves needed beyond n+1

    // Correcting the last element contribution
    if (b[n] == 0) {
        dp[n] = 1;  // If last element alone can be a good part
    } else {
        dp[n] = INT_MAX;  // Otherwise, we need to remove it
    }

    for (int i = n - 1; i >= 1; i--) {
        int deleteMove = 1 + dp[i + 1];  // Case when deleting element i

        int partitionMove = INT_MAX;
        int j = i + b[i];  // Check if we can form a valid partition

        if (j <= n && b[i] == abs(i - j)) {
            partitionMove = min(partitionMove, dp[j + 1]);
        }

        dp[i] = min(deleteMove, partitionMove);
    }

    cout << "Minimum moves: " << dp[1] << endl;
    return 0;
}

*/



/*def min_moves_to_good_partition(n, b):
    dp = [float('inf')] * (n + 2)  # Initialize DP array with large values

    dp[n + 1] = 0  # Base case: No moves needed beyond n+1

    # Handling the last element
    if b[n] == 0:
        dp[n] = 1  # If last element alone is a good partition
    else:
        dp[n] = float('inf')  # Otherwise, we must remove it

    for i in range(n - 1, 0, -1):
        delete_move = 1 + dp[i + 1]  # Case when deleting element i

        partition_move = float('inf')
        j = i + b[i]  # Check if we can form a valid partition

        if j <= n and b[i] == abs(i - j):
            partition_move = dp[j + 1]

        dp[i] = min(delete_move, partition_move)

    return dp[1]

# Example Usage:
n = int(input())  # Input size of array
b = [0] + list(map(int, input().split()))  # 1-based indexing

print("Minimum moves:", min_moves_to_good_partition(n, b))
*/