/*A data analyst wants to analyze the performance of his investments in the HackShare stock. The PnL of his portfolio is represented by an array pnl where pnl[i] represents the profit earned in the ith month that can possibly be negative indicating a loss.
Given the pnl array of n months, find the maximum net profit (sum of profits) gained in any contiguous segment of months i.e. a subarray of months such that the number of months in the segment does not exceed a given integer k.
Example
Given n = 6, pnl = [-3, 4, 3, -2, 2, 5], k = 4.
We can select the subarray [3, -2, 2, 5] with a total profit 3 + (-2) + 2 + 5 = 8. Note that while the maximum net profit of a subarray can be 12 for the subarray [4, 3, -2, 2, 5] but the length of the subarray will exceed k = 4.
Hence, we reffort 8 as the answer.*/



/*#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    // Input example.
    int n = 6;
    vector<int> pnl = {-3, 4, 3, -2, 2, 5};
    int k = 4; // Maximum allowed subarray length
    
    // Build the prefix sum array P with size n+1.
    // P[0] = 0; P[i] = pnl[0] + ... + pnl[i-1]
    vector<ll> P(n+1, 0);
    for (int i = 1; i <= n; i++){
        P[i] = P[i-1] + pnl[i-1];
    }
    
    // We'll store pairs (P[i], i) in the priority queue, using a min-heap.
    // Use greater<> as the comparator.
    using pli = pair<ll, int>;
    priority_queue<pli, vector<pli>, greater<pli>> pq;
    
    // Initialize answer with very small value.
    ll ans = -numeric_limits<ll>::max();
    
    // Process indices j from 0 to n (where j in P corresponds to a subarray ending at index j-1).
    for (int j = 0; j <= n; j++) {
        // Remove expired indices from the heap: indices i must be at least j - k.
        while (!pq.empty() && pq.top().second < j - k)
            pq.pop();
        
        // For j > 0, the candidate subarray sum = P[j] - (minimum P[i] in the window)
        if (j > 0 && !pq.empty()) {
            ans = max(ans, P[j] - pq.top().first);
        }
        
        // Push the current prefix value and index into the priority queue.
        pq.push({P[j], j});
    }
    
    cout << "Maximum net profit for subarrays of length at most " << k << " is: " << ans << endl;
    
    return 0;
}
*/


/*import heapq
import sys

def max_profit_limited_length(pnl, k):
    n = len(pnl)
    # Build prefix sum array, P[0] = 0, and P[i] = sum(pnl[0:i])
    P = [0] * (n + 1)
    for i in range(1, n+1):
        P[i] = P[i-1] + pnl[i-1]
    
    # Priority queue (min-heap) will store tuples (prefix_sum, index)
    pq = []    
    ans = -sys.maxsize  # A very small number initially
    
    # Iterate over j from 0 to n: For j in P, the subarray ending index is j-1
    for j in range(n+1):
        # Remove elements from the heap if their index is out of the window.
        # Valid indices i must have i >= j - k.
        while pq and pq[0][1] < j - k:
            heapq.heappop(pq)
        
        # For j > 0, compute candidate sum if there's any valid starting index.
        if j > 0 and pq:
            candidate = P[j] - pq[0][0]
            ans = max(ans, candidate)
        
        # Push current prefix sum and its index into the heap.
        heapq.heappush(pq, (P[j], j))
    
    return ans

# Example usage:
pnl = [-3, 4, 3, -2, 2, 5]
k = 4
result = max_profit_limited_length(pnl, k)
print("Maximum net profit for subarrays of length at most", k, "is:", result)
*/