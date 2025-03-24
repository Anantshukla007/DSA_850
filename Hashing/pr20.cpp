/*Maximum Sum Selection

You are given an integer array A of size N. Your task is to select exactly B elements from either the left end or the right end of the array A in order to maximize the sum of the selected elements.

Here are the details of the problem:

You are given an integer array A of size N where 1 <= N <= 10^5.
You need to select exactly B elements from either the left end or the right end of the array A.
The goal is to find and return the maximum possible sum of elements you can pick.

Input:

An integer array A of size N where each element A[i] satisfies -103 <= A[i] <= 103.
An integer B where 1 <= B <= N.
Output:

An integer representing the maximum possible sum of selected elements.

[5, -2, 3, 1, 2], 3 -> 8*/



/*#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr, int b) {
    int n = arr.size();
    
    // Suffix sum array
    vector<int> suff(n, 0);
    suff[n - 1] = arr[n - 1];
    
    // Compute suffix sums
    for (int i = n - 2; i >= 0; i--) {
        suff[i] = suff[i + 1] + arr[i];
    }

    int ans = suff[n - b]; // Initial maximum sum
    int prev = 0;

    for (int i = 0; i < b; i++) {
        prev += arr[i]; // Accumulate prefix sum
        
        // Avoid accessing out of bounds
        if (n - b + i + 1 < n) {
            ans = max(ans, prev + suff[n - b + i + 1]);
        } else {
            ans = max(ans, prev); // Handle edge case
        }
    }
    
    return ans;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int b;
    cin >> b;
    
    int ans = solve(arr, b);
    cout << ans << endl;
    
    return 0;
}
*/




/*Python*/

/*def solve(arr, b):
    n = len(arr)
    
    # Initialize suffix sum array
    suff = [0] * n
    suff[n - 1] = arr[n - 1]
    
    # Compute suffix sums
    for i in range(n - 2, -1, -1):
        suff[i] = suff[i + 1] + arr[i]
    
    ans = suff[n - b]  # Initial maximum sum
    prev = 0
    
    for i in range(b):
        prev += arr[i]  # Correctly accumulate prefix sum
        if n - b + i + 1 < n:  # Avoid out-of-bounds error
            ans = max(ans, prev + suff[n - b + i + 1])
        else:
            ans = max(ans, prev)  # Handle the edge case

    return ans


# Input handling
n = int(input())
arr = list(map(int, input().split()))
b = int(input())

# Output result
print(solve(arr, b))
*/