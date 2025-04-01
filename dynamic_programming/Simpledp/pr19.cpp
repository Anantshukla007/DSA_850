/*You are given an array A. Size = N. You start at index 1 and end at index N. Find the number of ways to reach from index 1 to index N. 

You have to follow some conditions. 

Each number A[i] = 1 or 2 ; if you are at index i you can make a jump of size from range [1…..A[i]] 
You are allowed to jump backwards also but utmost 1 time


*/


/*#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    // Read array A in 1-indexed fashion (A[i] is either 1 or 2)
    vector<int> A(N+1);
    for (int i = 1; i <= N; i++){
        cin >> A[i];
    }
    
    // dp[i][0] stores the number of ways to reach index i without having used a backward jump.
    // dp[i][1] stores the number of ways to reach index i having already used the backward jump.
    vector<vector<long long>> dp(N+1, vector<long long>(2, 0));
    
    // We start at index 1 with the backward jump still available.
    dp[1][0] = 1;
    
    // Process all indices from 1 to N.
    for (int i = 1; i <= N; i++){
        // Iterate over both states: 0 means backward jump is still available, 1 means it's already used.
        for (int used = 0; used < 2; used++){
            // If there are no ways to reach i in this state, skip processing.
            if(dp[i][used] == 0) continue;
            
            // Forward jumps: possible jump sizes are from 1 to A[i].
            for (int s = 1; s <= A[i]; s++){
                // Ensure the jump does not go beyond index N.
                if(i + s <= N){
                    dp[i+s][used] += dp[i][used];
                }
            }
            
            // Backward jump: allowed only if the backward jump hasn't been used yet.
            if(used == 0){
                // For jump sizes from 1 to A[i]
                for (int s = 1; s <= A[i]; s++){
                    // Check that the backward jump remains within valid indices.
                    if(i - s >= 1){
                        // Mark the state as used (1) for a backward jump.
                        dp[i-s][1] += dp[i][0];
                    }
                }
            }
        }
    }
    
    // The answer is the total ways to reach index N, regardless of the backward jump state.
    cout << dp[N][0] + dp[N][1] << "\n";
    
    return 0;
}
*/



/*def count_ways(N, A):
    # Create a DP table with N+1 rows (1-indexed) and 2 states for each index.
    # dp[i][0] is the number of ways to reach index i without using backward jump.
    # dp[i][1] is the number of ways to reach index i with the backward jump used.
    dp = [[0, 0] for _ in range(N+1)]
    
    # Starting at index 1 with backward jump available (state 0)
    dp[1][0] = 1
    
    # Process each index from 1 to N.
    for i in range(1, N+1):
        # Process both states.
        for used in range(2):
            # If there are no ways to reach index i in this state, skip.
            if dp[i][used] == 0:
                continue
            # Forward jumps: can jump by any step from 1 to A[i-1]
            # Note: A is 0-indexed in Python.
            for s in range(1, A[i-1] + 1):
                if i + s <= N:
                    dp[i+s][used] += dp[i][used]
            # Backward jump: allowed only if the backward jump hasn't been used (state = 0)
            if used == 0:
                for s in range(1, A[i-1] + 1):
                    if i - s >= 1:
                        dp[i-s][1] += dp[i][0]
    
    # The final answer is the sum of ways to reach index N with either state.
    return dp[N][0] + dp[N][1]

# Read input and output the result
if __name__ == '__main__':
    N = int(input())
    # Read the array A (0-indexed in Python; size = N)
    A = list(map(int, input().split()))
    print(count_ways(N, A))
*/