/*n the city of Dreamland, there lived a thief famous for its unbeatable robbery strategy. One fine day, the thief decided to rob a street where wealthy people used to live. All the houses on the street are aligned in a row H, a house at index is having money H(). The thief decided to follow the following principles during the robbery

•He will rob exactly 2 consecutive houses in one go
He can also rob exactly 3 consecutive houses in one
go
He will leave a gap of at least one house between two adjacent robberies if both robberies involved 2 houses
each
He will leave a gap of at least two houses between two robberies if any of the two adjacent robberies
Invalved 3 houses
The thief wants to maximise the robbery amount by sticking to the above conditions. Find the maximum amount of money a thief can collect if he robs optimally.
Input Format
The first line will be an integer T. denoting the number of test cases,
For each test case, the first line will be an integer N*/




/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<long long> H(N);
        for(int i = 0; i < N; i++){
            cin >> H[i];
        }
        
        // dp[i] stores the maximum robbery amount from house i onward.
        // We make dp large enough to handle indices up to N+5.
        vector<long long> dp(N+6, 0);
        
        // Process backwards from last index down to 0.
        for (int i = N-1; i >= 0; i--) {
            // Option 1: Skip house i.
            long long skip = dp[i+1];
            long long option2 = 0, option3 = 0;
            
            // Option 2: Rob 2 consecutive houses starting at i.
            if(i+1 < N){
                long long sum2 = H[i] + H[i+1];
                // If we take 2 houses, then:
                // if next robbery is 2-house, allowed next index is i+3.
                // if next robbery is 3-house, allowed next index is i+4.
                long long next_opt = max(dp[i+3], dp[i+4]);
                option2 = sum2 + next_opt;
            }
            // Option 3: Rob 3 consecutive houses starting at i.
            if(i+2 < N){
                long long sum3 = H[i] + H[i+1] + H[i+2];
                // After a 3-house robbery, gap is 2 houses, so next allowed index is i+5.
                option3 = sum3 + dp[i+5];
            }
            dp[i] = max({skip, option2, option3});
        }
        
        cout << dp[0] << "\n";
    }
    return 0;
}
*/


//python////
/*def max_robbery(H):
    N = len(H)
    dp = [0] * (N+6)  # Extra space for indices beyond N
    for i in range(N-1, -1, -1):
        skip = dp[i+1]
        option2 = 0
        option3 = 0
        if i+1 < N:
            sum2 = H[i] + H[i+1]
            next_opt = max(dp[i+3], dp[i+4])
            option2 = sum2 + next_opt
        if i+2 < N:
            sum3 = H[i] + H[i+1] + H[i+2]
            option3 = sum3 + dp[i+5]
        dp[i] = max(skip, option2, option3)
    return dp[0]

# Example usage:
T = int(input())
for _ in range(T):
    N = int(input())
    H = list(map(int, input().split()))
    print(max_robbery(H))
*/