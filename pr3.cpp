/*Find Sum of Range  [l……….r] where(l<=r) using Prefix sum. 
*/



/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int l, r;
    cin >> l >> r;

    vector<int> arr(n);
    vector<int> pre(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Compute prefix sum
    pre[0] = arr[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + arr[i];
    }

    // Print prefix sum array (debugging purpose)
    cout << "Prefix Sum Array: ";
    for (int i = 0; i < n; i++) {
        cout << pre[i] << " ";
    }
    cout << endl;

    // Compute sum of elements in range [l, r]
    int range_sum = pre[r] - (l > 0 ? pre[l - 1] : 0);
    cout << "Sum from index " << l << " to " << r << " is: " << range_sum << endl;

    return 0;
}
*/

/*ptyon*/


/*def solve(arr):
    n = len(arr)
    pre = [0] * n
    pre[0] = arr[0]
    
    for i in range(1, n):
        pre[i] = pre[i - 1] + arr[i]
    
    return pre

# Input handling
n = int(input())
arr = list(map(int, input().split()))

# Compute prefix sum array
pr = solve(arr)

# Print the prefix sum array
for i in pr:  # Use 'pr' instead of 'pre'
    print(i)
*/