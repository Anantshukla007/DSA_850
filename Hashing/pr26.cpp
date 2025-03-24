/* Given an array of size “N”; find -> find the number of unordered quadruplets (i,j,k,l) such that b[i] + b[j] + b[k] + b[l] = 0 

-> [1 2 3 4 -1 -2 -2] 

-> 3 [1,2,5,6]  [1,2,5,7] [1,3,6,7] 
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

    unordered_map<int, int> mp;
    
    // Precompute pair sums for last two elements
    for (int i = 2; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            mp[arr[i] + arr[j]]++;
        }
    }

    int ans = 0;

    // Iterate through first two elements
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            int d = arr[i] + arr[j];
            int u = -d;

            if (mp.find(u) != mp.end()) {
                ans += mp[u];
            }
        }

        // Remove outdated pair sums from the map
        for (int j1 = i + 2; j1 < n; j1++) {
            mp[arr[i + 1] + arr[j1]]--;
        }
    }

    cout << ans << endl;
    return 0;
}
*/


/*def count_quadruplets(arr):
    n = len(arr)
    mp = {}

    # Precompute pair sums for last two elements
    for i in range(2, n):
        for j in range(i + 1, n):
            key = arr[i] + arr[j]
            mp[key] = mp.get(key, 0) + 1

    ans = 0

    # Iterate through first two elements
    for i in range(1, n):
        for j in range(i):
            d = arr[i] + arr[j]
            u = -d

            if u in mp:
                ans += mp[u]

        # Remove outdated pair sums from the map
        for j1 in range(i + 2, n):
            key = arr[i + 1] + arr[j1]
            if key in mp:
                mp[key] -= 1

    return ans

# Input handling
n = int(input())
arr = list(map(int, input().split()))
print(count_quadruplets(arr))
*/