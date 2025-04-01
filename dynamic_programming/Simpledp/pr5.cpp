/*There are 
N stones, numbered 
1,2,…,N. For each 
i (
1≤i≤N), the height of Stone 
i is 
h 
i
​
 .

There is a frog who is initially on Stone 
1. He will repeat the following action some number of times to reach Stone 
N:

If the frog is currently on Stone 
i, jump to Stone 
i+1 or Stone 
i+2. Here, a cost of 
∣h 
i
​
 −h 
j
​
 ∣ is incurred, where 
j is the stone to land on.
Find the minimum possible total cost incurred before the frog reaches Stone 
N.*/



/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n), dp(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read heights into arr[]
    }

    dp[0] = 0;  // Starting point, no cost
    if (n > 1) {
        dp[1] = abs(arr[1] - arr[0]);
    }

    for (int i = 2; i < n; i++) {
        dp[i] = min(dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + abs(arr[i] - arr[i - 2]));
    }

    cout << dp[n - 1] << endl;
    return 0;
}
*/



///python///


/*
def min_cost_to_reach_n(n, heights):
    dp = [0] * n
    if n > 1:
        dp[1] = abs(heights[1] - heights[0])

    for i in range(2, n):
        dp[i] = min(dp[i - 1] + abs(heights[i] - heights[i - 1]),
                    dp[i - 2] + abs(heights[i] - heights[i - 2]))

    return dp[n - 1]

# Input Handling
n = int(input())
heights = list(map(int, input().split()))
print(min_cost_to_reach_n(n, heights))
*/



//follow up


/*There are 
N stones, numbered 
1,2,…,N. For each 
i (
1≤i≤N), the height of Stone 
i is 
h 
i
​
 .

There is a frog who is initially on Stone 
1. He will repeat the following action some number of times to reach Stone 
N:

If the frog is currently on Stone 
i, jump to one of the following: Stone 
i+1,i+2,…,i+K. Here, a cost of 
∣h 
i
​
 −h 
j
​
 ∣ is incurred, where 
j is the stone to land on.
Find the minimum possible total cost incurred before the frog reaches Stone 
N.*/



/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, K;
    cin >> n >> K;
    
    vector<int> arr(n), dp(n, INT_MAX);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    dp[0] = 0;  // No cost to start at stone 1

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= K && i - j >= 0; j++) {
            dp[i] = min(dp[i], dp[i - j] + abs(arr[i] - arr[i - j]));
        }
    }

    cout << dp[n - 1] << endl;
    return 0;
}
*/


/*def min_cost_to_reach_n(n, K, heights):
    dp = [float('inf')] * n
    dp[0] = 0  # Starting point has no cost

    for i in range(1, n):
        for j in range(1, K + 1):
            if i - j >= 0:
                dp[i] = min(dp[i], dp[i - j] + abs(heights[i] - heights[i - j]))

    return dp[n - 1]

# Input Handling
n, K = map(int, input().split())
heights = list(map(int, input().split()))
print(min_cost_to_reach_n(n, K, heights))
*/