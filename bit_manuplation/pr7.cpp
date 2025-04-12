/*You are given an array of non negative integers A.
There is a special move allowed to you, in which you can select any two elements and subtract 2 ^i from each element if and only if their bitwise AND contains 1 at i'th bit. 
You can perform this operation any number of times. An array is called good if by using above special moves you can reduce it to an array of zeroes.
Now you need to find the number of good subarrays in array A. Since the number can be very large print answer % (10°+7).*/


/*#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    
    // Frequency map to count prefix XOR occurrences.
    unordered_map<int, long long> freq;
    int prefix = 0;
    freq[prefix] = 1; // count the initial prefix which is 0
    
    long long goodSubarrays = 0;
    
    // Compute prefix XOR and count frequencies.
    for (int i = 0; i < n; i++) {
        prefix ^= A[i];
        // If prefix already exists then all previous positions with the same prefix XOR
        // form a subarray with XOR 0 when paired with the current index.
        if (freq.find(prefix) != freq.end()) {
            goodSubarrays = (goodSubarrays + freq[prefix]) % MOD;
        }
        freq[prefix]++;
    }
    
    cout << goodSubarrays % MOD << "\n";
    return 0;
}
*/


/*MOD = 10**9 + 7

def count_good_subarrays(A):
    freq = {}
    prefix = 0
    freq[prefix] = 1  # initial prefix XOR = 0
    good_subarrays = 0
    
    for num in A:
        prefix ^= num
        # If this prefix XOR has been seen before, then all subarrays ending
        # here with same previous prefix XOR have XOR 0.
        good_subarrays = (good_subarrays + freq.get(prefix, 0)) % MOD
        freq[prefix] = freq.get(prefix, 0) + 1
    
    return good_subarrays

if __name__ == "__main__":
    n = int(input())
    A = list(map(int, input().split()))
    print(count_good_subarrays(A))
*/


/*Why “XOR equals 0” Characterizes Good Subarrays
The Move and Its Effect on Bits
Allowed Move:
You are allowed to select any two elements and subtract 
2
𝑖
2 
i
  from each if the 
𝑖
ith bit is set (i.e. equals 1) in both numbers.

What It Does:
Subtracting 
2
𝑖
2 
i
  from a number that has the 
𝑖
ith bit set will “turn off” that bit (since the number’s representation in binary means the 
𝑖
ith bit contributes exactly 
2
𝑖
2 
i
  to the number’s value).

Pairwise Cancellation:
Because the move always works on pairs, you can only eliminate bits in pairs. Consequently, for every bit position 
𝑖
i, the subarray must have an even number of 1’s at that bit.

Equivalence to XOR 0
Binary Parity:
A bit position in the XOR of a set of numbers is 1 if and only if the count of ones in that bit position is odd.

XOR 0 Condition:
Thus, if a subarray’s XOR is 0, then at each bit position the ones appear an even number of times.

Conclusion:
Therefore, an array (or subarray) is good if and only if the XOR of all its elements is 0.*/