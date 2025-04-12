/*You are given an array of non negative integers A.
There is a special move allowed to you, in which you can select any two elements and subtract 2 ^i from each element if and only if their bitwise AND contains 1 at i'th bit. 
You can perform this operation any number of times. An array is called good if by using above special moves you can reduce it to an array of zeroes.
Now you need to find the number of good subarrays in array A. Since the number can be very large print answer % (10°+7).*/

/*#include <iostream>
#include <vector>
using namespace std;

const int BITS = 31; // assuming 32-bit integers

// Function to precompute prefix counts for each bit position.
vector<vector<int>> buildPrefixTable(const vector<int>& A) {
    int n = A.size();
    // Create a table of dimensions (BITS) x (n+1)
    vector<vector<int>> prefix(BITS, vector<int>(n + 1, 0));
    
    for (int i = 0; i < BITS; ++i) {
        for (int j = 0; j < n; ++j) {
            prefix[i][j + 1] = prefix[i][j] + ((A[j] >> i) & 1);
        }
    }
    return prefix;
}

// Function to compute range AND using the precomputed prefix table.
int rangeAND(const vector<vector<int>>& prefix, int L, int R) {
    // Range is assumed to be inclusive: [L, R]
    int rangeCount = R - L + 1;
    int res = 0;
    for (int i = 0; i < BITS; ++i) {
        // Count of ones in bit i for range [L, R]
        int countOnes = prefix[i][R + 1] - prefix[i][L];
        if (countOnes == rangeCount) {
            // Set the i'th bit in the result
            res |= (1 << i);
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    
    // Build prefix table for the bits.
    auto prefix = buildPrefixTable(A);
    
    int q;
    cin >> q;
    while (q--) {
        // Input four integers representing two ranges.
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        // (Assuming the input indices are 0-indexed; adjust if not.)
        int x1 = rangeAND(prefix, l1, r1);
        int x2 = rangeAND(prefix, l2, r2);
        cout << (x1 ^ x2) << "\n";
    }
    
    return 0;
}
*/


/*def build_prefix_table(A):
    n = len(A)
    BITS = 31  # assuming 32-bit integers
    # Create a table with BITS rows and n+1 columns.
    prefix = [[0]*(n+1) for _ in range(BITS)]
    
    for i in range(BITS):
        for j in range(n):
            # If A[j] has the i'th bit set, add 1.
            prefix[i][j+1] = prefix[i][j] + ((A[j] >> i) & 1)
    return prefix

def range_AND(prefix, L, R):
    # [L, R] inclusive.
    count = R - L + 1
    res = 0
    BITS = len(prefix)
    for i in range(BITS):
        countOnes = prefix[i][R + 1] - prefix[i][L]
        if countOnes == count:
            res |= (1 << i)
    return res

if __name__ == '__main__':
    n = int(input())
    A = list(map(int, input().split()))
    prefix = build_prefix_table(A)
    q = int(input())
    results = []
    for _ in range(q):
        l1, r1, l2, r2 = map(int, input().split())
        x1 = range_AND(prefix, l1, r1)
        x2 = range_AND(prefix, l2, r2)
        results.append(x1 ^ x2)
    for res in results:
        print(res)
*/