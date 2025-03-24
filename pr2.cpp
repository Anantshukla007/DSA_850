/*Count all the (i,j) Pairs such that b[i] + b[j] == k (count of such pairs.) [i<j] 

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

    unordered_map<int, int> mp;  // Declare the map
    int count_pairs = 0;

    for (auto x : arr) {
        int comp = k - x;
        if (mp.find(comp) != mp.end()) {
            count_pairs += mp[comp];  // Use count_pairs instead of count
        }
        mp[x]++;
    }

    cout << count_pairs << endl;
    return 0;  // Fixed typo from retunr to return
}
*/


/*python*/


/*def solve(arr, k):
    mp = {}
    count = 0
    
    for i in arr:
        comp = k - i  # Corrected syntax
        if comp in mp:
            count += mp[comp]  # Count the number of times 'comp' has appeared
        mp[i] = mp.get(i, 0) + 1  # Update frequency of 'i'
    
    return count

# Input handling
n = int(input())
k = int(input())
arr = list(map(int, input("Enter the elements: ").split()))

print(solve(arr, k))
*/