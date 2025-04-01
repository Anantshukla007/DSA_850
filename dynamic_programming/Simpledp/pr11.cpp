/*An array of costs was given.
You always start at index 1.
You can either take two jumps forward or one jump backward. If you land on a particular index, you h
ave to add the cost to your total.
Find the minimum cost needed to cross the array or reach the end of the array.
You can visit any index for only 1 time.
Explain
6-[258]*/




/*#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int min_cost_bfs(vector<int>& costs) {
    int n = costs.size() - 1;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    unordered_set<int> visited;
    
    pq.push({costs[1], 1}); // (cost, index)

    while (!pq.empty()) {
        auto [cost, i] = pq.top();
        pq.pop();

        if (i == n) return cost; // Reached last index

        if (visited.count(i)) continue;
        visited.insert(i);

        // Move forward by 2
        if (i + 2 <= n) {
            pq.push({cost + costs[i + 2], i + 2});  // Fixed: costs[i+2]
        }

        // Move backward by 1
        if (i - 1 >= 1) {
            pq.push({cost + costs[i - 1], i - 1});  // Fixed: costs[i-1]
        }
    }

    return -1;
}

int main() {
    vector<int> costs = {0, 2, 5, 8, 3, 1}; // 1-based index input (costs[0] ignored)
    cout << min_cost_bfs(costs) << endl; // Output: Minimum cost to cross
    return 0;
}
*/

///python bfs////


/*import heapq

def min_cost_bfs(costs):
    n = len(costs)
    pq = [(costs[1], 1)]  # (cost, index) - Start at index 1 (1-based index)
    visited = set()

    while pq:
        cost, i = heapq.heappop(pq)  # Get the minimum cost position
        
        if i == n:  # If reached the last index
            return cost
        
        if i in visited:
            continue
        visited.add(i)

        # Move forward by 2 steps
        if i + 2 <= n:
            heapq.heappush(pq, (cost + costs[i + 2], i + 2))  # Fixed: costs[i+2]

        # Move backward by 1 step
        if i - 1 >= 1:
            heapq.heappush(pq, (cost + costs[i - 1], i - 1))  # Fixed: costs[i-1]

    return -1  # If no way to reach the end

# Example usage:
costs = [0, 2, 5, 8, 3, 1]  # 1-based index input (costs[0] ignored)
print(min_cost_bfs(costs))  # Output: Minimum cost to cross
 */



 ///dp  code//////////////


 /*#include <bits/stdc++.h>

using namespace std;
typedef long long int ll ; 

int my(int k,int r,int g){
    
    return min(k,max(r,g));
}


int main() {
    int n ; 
    cin>>n ; 
    int b[n+1] = {0};
    
    int i = 1 ;
    while(i<=n){
        cin>>b[i] ; 
        i++;
    }
    
    int dp[n+1][5]; 
    
    dp[1][2] = b[1] ; 
    dp[1][1] = 100000000 ; 
    dp[2][2] = 100000000 ; 
    dp[2][1] = dp[1][2] + b[2] + b[3] ;
    
    
    i = 3 ; 
    while(i<=n-1){
        
        
        dp[i][2] = b[i] + min(dp[i-2][1],dp[i-2][2]);
        dp[i][1] = b[i] + b[i+1] + dp[i-1][2] ; 
        
        i++;
    }
    dp[i][2] = b[n] + min(dp[i-2][2],dp[i-2][1]);
    dp[i][1] = 100000000 ; 
    cout<<my(dp[n][2],dp[n-1][2],dp[n-1][1]);
    
    
    
    return 0 ; 
}*/