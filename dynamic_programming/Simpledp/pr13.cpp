/*> There are two arrays , 'B' and 'C' ; size of both the arrays is 'N' ;

-> At each index you are supposed to pick up an element either from array 'C' or array 'B'

->You have to maximize the final sum of all elements

->Condition : You cannot select 3 or more than 3 element consecutively from the same array.

Example :

3

5 10

3 10

4 10

Output : 25*/


/*#include <bits/stdc++.h>
using namespace std;

int maxOf2Array(vector<int>& A, vector<int>& B) {
    int N = A.size();
    
    if (N == 1) return max(A[0], B[0]); // Base case for a single element

    vector<vector<vector<int>>> dp(N, vector<vector<int>>(2, vector<int>(2, 0)));

    // Base cases (0-indexed)
    dp[0][0][0] = A[0]; // Choosing A[0]
    dp[0][1][0] = B[0]; // Choosing B[0]

    if (N > 1) {
        dp[1][0][0] = A[1] + A[0];  // A[i], A[i-1]
        dp[1][0][1] = A[1] + B[0];  // A[i], B[i-1]
        dp[1][1][0] = B[1] + A[0];  // B[i], A[i-1]
        dp[1][1][1] = B[1] + B[0];  // B[i], B[i-1]
    }

    for (int i = 2; i < N; i++) {
        dp[i][0][0] = A[i] + A[i - 1] + max(dp[i - 2][1][1], dp[i - 2][1][0]);
        dp[i][0][1] = A[i] + B[i - 1] + max(dp[i - 2][0][0], dp[i - 2][0][1], dp[i - 2][1][0]);
        dp[i][1][0] = B[i] + A[i - 1] + max(dp[i - 2][1][0], dp[i - 2][1][1], dp[i - 2][0][1]);
        dp[i][1][1] = B[i] + B[i - 1] + max(dp[i - 2][0][1], dp[i - 2][0][0]);
    }

    return max({dp[N - 1][0][0], dp[N - 1][0][1], dp[N - 1][1][1], dp[N - 1][1][0]});
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    cout << maxOf2Array(A, B) << endl;
    return 0;
}
*/


///python///

/*def maxOf2Array(A, B):
    N = len(A)
    
    if N == 1:
        return max(A[0], B[0])  # Base case for single element

    # 3D DP array: dp[i][x][y] (i-th index, choosing x-th element from A/B, y tracks continuity)
    dp = [[[0 for _ in range(3)] for _ in range(3)] for _ in range(N + 1)]

    # Base case initialization
    dp[0][1][1] = A[0]
    dp[0][2][1] = B[0]

    if N > 1:
        dp[1][1][1] = A[1] + A[0]   # Two consecutive A's
        dp[1][1][2] = A[1] + B[0]   # A[i], B[i-1]
        dp[1][2][1] = B[1] + A[0]   # B[i], A[i-1]
        dp[1][2][2] = B[1] + B[0]   # Two consecutive B's

    for i in range(2, N):
        dp[i][1][1] = A[i] + A[i - 1] + max(dp[i - 2][2][2], dp[i - 2][2][1])
        dp[i][1][2] = A[i] + B[i - 1] + max(dp[i - 2][1][1], dp[i - 2][1][2], dp[i - 2][2][1])
        dp[i][2][1] = B[i] + A[i - 1] + max(dp[i - 2][2][1], dp[i - 2][2][2], dp[i - 2][1][2])
        dp[i][2][2] = B[i] + B[i - 1] + max(dp[i - 2][1][2], dp[i - 2][1][1])

    return max(dp[N - 1][1][1], dp[N - 1][1][2], dp[N - 1][2][2], dp[N - 1][2][1])


# Test Case
A = [5, 3, 4]
B = [10, 10, 10]
print(maxOf2Array(A, B))  # Expected output: 25
*/