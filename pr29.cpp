/*Count the number of mountain subarrays(length.>=3) in the array 

1<=N<=100000

1<=A[i]<=100000000

[1 2 4 2 1] 

O/p-> [1 2 4 2] 
[2 4 2] 
[2 4 2 1] 
[1 2 4 2 1] 

*/


/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> pre(n, 1), suff(n, 1);

    // Compute prefix array
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] < arr[i]) {
            pre[i] = pre[i - 1] + 1;
        }
    }

    // Compute suffix array
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[i + 1]) {
            suff[i] = suff[i + 1] + 1;
        }
    }

    // Compute final result
    int k = 0;
    for (int i = 0; i < n; i++) {
        k += max(0, (pre[i] - 1)) * max(0, (suff[i] - 1));
    }

    cout << k << endl;
    return 0;
}
*/


/*python*/
/*def compute_value(arr):
    n = len(arr)
    
    pre = [1] * n
    suff = [1] * n

    # Compute prefix array
    for i in range(1, n):
        if arr[i - 1] < arr[i]:
            pre[i] = pre[i - 1] + 1

    # Compute suffix array
    for i in range(n - 2, -1, -1):
        if arr[i] > arr[i + 1]:
            suff[i] = suff[i + 1] + 1

    # Compute final result
    k = sum(max(0, (pre[i] - 1)) * max(0, (suff[i] - 1)) for i in range(n))

    return k

# Input handling
n = int(input("Enter size of array: "))
arr = list(map(int, input("Enter elements: ").split()))

if len(arr) != n:
    print("Error: The number of elements does not match the given size.")
else:
    print("Computed Value:", compute_value(arr))
*/