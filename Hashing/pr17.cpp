/*-> You are given an array of size “N” and two integers “x” and “y” 
-> Array only consists of integers “x” and “y”
-> Find the count of subarrays which have equal number of “x” and “y” 
*/


/*#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int x, int y) {
    int n = arr.size();
    unordered_map<int, int> mp; // Store frequency of difference (cx - cy)
    int cx = 0, cy = 0;
    int count = 0;
    
    // Initialize map with 0 difference case
    mp[0] = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) cx++;
        if (arr[i] == y) cy++;

        int d = cx - cy; // Compute difference

        // If this difference has been seen before, add occurrences
        if (mp.find(d) != mp.end()) {
            count += mp[d];
        }

        // Store the occurrence of the difference
        mp[d]++;
    }

    return count;
}

int main() {
    int n;
    cin >> n; // Number of elements

    int x, y;
    cin >> x >> y; // The two target numbers

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = solve(arr, x, y);
    cout << ans << endl;
    
    return 0;
}
*/

/*python*/

/*def solve(arr, x, y):
    n = len(arr)
    mp = {}
    cx = 0  # Count of x
    cy = 0  # Count of y
    count = 0

    # Initialize map with 0 difference case
    mp[0] = 1

    for i in arr:
        if i == x:
            cx += 1
        elif i == y:
            cy += 1

        d = cx - cy  # Compute difference

        # If this difference has been seen before, add occurrences
        if d in mp:
            count += mp[d]

        # Store the occurrence of the difference
        mp[d] = mp.get(d, 0) + 1

    return count


# Read input
n = int(input())  # Number of elements
x, y = map(int, input().split())  # The two target numbers
arr = list(map(int, input().split()))  # Input array

# Solve and print the result
print(solve(arr, x, y))
*/


/*Follow up :-  -> You are given an array of size “N” and 5 distinct integers “x” “y” “z” “w” “b”
-> Array only consists of integers “x” “y” “z” “w” “b”
-> Find the count of subarrays which have equal number of “x”  “y” “z” “w” “b” 
*/

/*#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countValidSubarrays(int n, int x, int y, int z, int w, int b) {
        int count = 0;  // Count of valid subarrays
        map<tuple<int, int, int, int>, int> freq;  // Frequency map to store counts of (d1, d2, d3, d4)
        freq[{0, 0, 0, 0}] = 1;  // Base case: (d1, d2, d3, d4) has been achieved once

        int cx = 0, cy = 0, cz = 0, cw = 0, cb = 0;  // Counters for x, y, z, w, b

        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;  // Taking input for each element of the array

            // Update counters based on the value
            if (val == x) cx++;
            else if (val == y) cy++;
            else if (val == z) cz++;
            else if (val == w) cw++;
            else if (val == b) cb++;

            // Compute differences
            int d1 = cy - cx;  // First condition difference
            int d2 = cz - cy;  // Second condition difference
            int d3 = cw - cz;  // Third condition difference
            int d4 = cb - cw;  // Fourth condition difference

            // Increment count based on how many times (d1, d2, d3, d4) was achieved
            count += freq[{d1, d2, d3, d4}];

            // Update frequency of (d1, d2, d3, d4)
            freq[{d1, d2, d3, d4}]++;
        }

        return count;
    }
};

int main() {
    int n, x, y, z, w, b;
    cin >> n >> x >> y >> z >> w >> b;  // Input the size and the distinct integers
    Solution sol;
    cout << sol.countValidSubarrays(n, x, y, z, w, b) << endl;  // Output the result
    return 0;
}
*/

                               /*****python******/
/*from collections import defaultdict

def count_valid_subarrays(n, x, y, z, w, b):
    count = 0  # Count of valid subarrays
    freq = defaultdict(int)  # Frequency map to store counts of (d1, d2, d3, d4)
    freq[(0, 0, 0, 0)] = 1  # Base case: (d1, d2, d3, d4) has been achieved once

    cx = cy = cz = cw = cb = 0  # Counters for x, y, z, w, b

    for i in range(n):
        b_val = int(input())  # Taking input for each element of the array

        # Update counters based on the value of b
        if b_val == x:
            cx += 1
        elif b_val == y:
            cy += 1
        elif b_val == z:
            cz += 1
        elif b_val == w:
            cw += 1
        elif b_val == b:
            cb += 1

        d1 = cy - cx  # First condition difference
        d2 = cz - cy  # Second condition difference
        d3 = cw - cz  # Third condition difference
        d4 = cb - cw  # Fourth condition difference

        # Increment count based on how many times (d1, d2, d3, d4) was achieved
        count += freq[(d1, d2, d3, d4)]
        
        # Update frequency of (d1, d2, d3, d4)
        freq[(d1, d2, d3, d4)] += 1  

    return count

# Input
if __name__ == "__main__":
    n = int(input())  # Size of the array
    x = int(input())  # First integer
    y = int(input())  # Second integer
    z = int(input())  # Third integer
    w = int(input())  # Fourth integer
    b = int(input())  # Fifth integer

    result = count_valid_subarrays(n, x, y, z, w, b)
    print(result)
*/