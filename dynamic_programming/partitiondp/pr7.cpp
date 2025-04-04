
/*Understanding :-> Given a string of integers; divide them ; in such a manner that ; all the parts of that string <=K ; find the number of ways to do it 

S = “123” ; K<=1000

Output :- 4. 

S = “125” ; K = 24 
Output :- 2. 

S = “1234” ; K = 1000
*/


/*#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int numWaysToPartition(string s, ll k) {
    int n = s.size();
    vector<ll> dp(n + 1, 0);
    dp[0] = 1; // Base case: One way to partition an empty string.

    for (int i = 1; i <= n; i++) { 
        ll num = 0;
        for (int j = i; j >= 1; j--) { 
            num = stoll(s.substr(j - 1, i - j + 1)); // Extract substring [j-1, i-1]
            if (num > k) break; // Stop if the number exceeds K
            if (s[j - 1] != '0') { // Avoid leading zeros
                dp[i] = (dp[i] + dp[j - 1]) % 1000000007; // Count valid partitions
            }
        }
    }
    
    return dp[n]; // Number of ways to partition the full string
}

int main() {
    string s;
    ll k;
    cin >> s >> k;
    cout << numWaysToPartition(s, k) << endl;
    return 0;
}
*/


/*def countPartitions(S, K):
    n = len(S)
    dp = [0] * (n + 1)
    dp[0] = 1  # Base case: one way to partition an empty string

    for i in range(1, n + 1):
        num = 0
        for j in range(i, 0, -1):
            num = int(S[j-1:i])  # Convert substring S[j-1:i] to integer
            if num > K: 
                break  # If number exceeds K, stop checking further
            if S[j-1] == '0' and j != i: 
                continue  # Skip leading zeros
            dp[i] += dp[j-1]  # Add valid partitions

    return dp[n]

# Test Cases
print(countPartitions("123", 1000))  # Output: 4
print(countPartitions("125", 24))  # Output: 2
print(countPartitions("1234", 1000))  # Output: 4
*/