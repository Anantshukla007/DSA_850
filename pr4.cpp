/*Find count of number of subarrays with sum ==  k 
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> prefixSumFreq;
    int sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // If the cumulative sum itself is equal to k
        if (sum == k) {
            count++;
        }

        // Check for previous prefix sums that can form sum - k
        int comp = sum - k;
        if (prefixSumFreq.count(comp)) {
            count += prefixSumFreq[comp];
        }

        // Store the current prefix sum frequency
        prefixSumFreq[sum]++;
    }

    cout << count << endl;
    return 0;
}
*/


/*python */


/*def solve(arr, k):
    prefix_sum_count = {}  
    current_sum = 0  
    count = 0  

    prefix_sum_count[0] = 1  # Initialize base case

    for num in arr:
        current_sum += num  
        target = current_sum - k  

        if target in prefix_sum_count:
            count += prefix_sum_count[target]

        prefix_sum_count[current_sum] = prefix_sum_count.get(current_sum, 0) + 1  

    return count  

# Input handling
n = int(input())
k = int(input())
arr = list(map(int, input().split()))

# Print the result
print(solve(arr, k))
*/