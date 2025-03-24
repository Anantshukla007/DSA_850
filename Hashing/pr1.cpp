/*Check if there are any two Equal numbers in an array at a distance less than or equal to k
*/

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int pairCount = 0;
    unordered_map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
        if (mp.find(arr[i]) != mp.end() && (i - mp[arr[i]]) <= k) {
            pairCount++;
        }
        mp[arr[i]] = i; // Update the last seen index
    }
    
    cout << pairCount << endl;
    return 0;
}
*/


/**********python solution */


/*def solve(arr, k):
    n = len(arr)
    mp = {}
    count = 0

    for i in range(n):
        if arr[i] in mp and (i - mp[arr[i]]) <= k:  # Corrected condition
            count += 1
        mp[arr[i]] = i  # Update last seen index

    return count


# Input handling
n = int(input())
k = int(input())
arr = list(map(int, input().split()))

print(solve(arr, k))
*/