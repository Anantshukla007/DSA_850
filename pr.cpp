/*We are given an Array of Numbers. We have to find and print any Number with Maximum Frequency and Minimum Frequency.

Example Testcase:-

Arr = [3, 2, 3, 2, 4, 3]

Frequencies of Elements of Array are:-

3 - 3
2 - 2
4 - 1
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

    map<int, int> mp;

    int maxfre = 0, maxele = 0;
    int minfreq = n + 1, minele = 0;

    // Count frequencies
    for (auto x : arr) {
        mp[x]++;
    }

    // Find max and min frequency elements
    for (auto &[num, freq] : mp) {
        if (freq > maxfre) {
            maxfre = freq;
            maxele = num;
        }

        if (freq < minfreq) {
            minfreq = freq;
            minele = num;
        }
    }

    cout << minfreq << " " << minele << endl;
    cout << maxfre << " " << maxele << endl;

    return 0;
}
*/



/*******python solution */

/*def solve(arr):
    n = len(arr)

    mp = {}
    minfre = float('inf')
    maxfre = float('-inf')
    maxele = 0
    minele = 0

    # Count frequencies
    for i in arr:
        mp[i] = mp.get(i, 0) + 1

    # Find min and max frequency elements
    for i in mp:
        if mp[i] > maxfre:
            maxfre = mp[i]
            maxele = i
        if mp[i] < minfre:
            minfre = mp[i]
            minele = i

    print(maxfre, maxele)
    print(minfre, minele)

# Example usage
arr = [1, 2, 3, 1, 2, 1, 4, 4, 4, 4]
solve(arr)
*/