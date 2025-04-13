/*Given an array of zeros and ones ; find the number of subarrays which have this property :->


(number of zeroes)
—---------------------    =    x / y 
(number of ones)

N = 7 
A ->[1 0 1 1 1 1 1]
X/Y = ½ 
Output -> [1 0 1] ;  X = 1 ; Y = 2 
[0 1 1] ; X = 1 ; Y = 2 
Ans is 2 . 





N = 7 
A-> [1 0 0 1 1 1 1]
X/Y = ½
Output = 3  
→ [3..5] is a valid subarray
—> [1..6] and [2…7] are also valid. 

Hence total 3 valid subarrays. 
*/



/*#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
using ll = long long;

int main(){
    // Example 1:
    // N = 7, A = [1, 0, 1, 1, 1, 1, 1], Ratio: X/Y = 1/2  (should output 2)
    // Example 2:
    // N = 7, A = [1, 0, 0, 1, 1, 1, 1], Ratio: X/Y = 1/2  (should output 3)
    
    // Select one of the examples:
    vector<int> A = {1, 0, 0, 1, 1, 1, 1};  // Change this array to test the other example.
    int n = A.size();
    
    // Given ratio parameters (assume they are in simplest form)
    int X = 1, Y = 2;
    
    // Build the prefix array D
    // D[0] = 0, and for i >= 1, D[i] = Y*(# zeros in A[0..i-1]) - X*(# ones in A[0..i-1])
    vector<ll> D(n+1, 0);
    for (int i = 0; i < n; i++) {
        // Carry forward previous value
        D[i+1] = D[i];
        if (A[i] == 0) {
            D[i+1] += Y;
        } else { // A[i] == 1
            D[i+1] -= X;
        }
    }
    
    // Count frequency of each D value
    unordered_map<ll, ll> freq;
    for (ll v : D) {
        freq[v]++;
    }
    
    // For every value v with frequency f, number of subarrays is f choose 2.
    ll ans = 0;
    for (auto &p : freq) {
        ll f = p.second;
        ans += f * (f - 1) / 2;
    }
    
    cout << "Number of valid subarrays = " << ans << endl;
    
    return 0;
}
*/



/*def count_valid_subarrays(A, X, Y):
    n = len(A)
    # Create prefix array D, with D[0] = 0.
    D = [0] * (n + 1)
    for i in range(n):
        if A[i] == 0:
            D[i+1] = D[i] + Y
        else:  # A[i] == 1
            D[i+1] = D[i] - X

    # Count frequency of each value in D
    freq = {}
    for v in D:
        freq[v] = freq.get(v, 0) + 1
    
    # For each value v that appears f times, we add f*(f-1)//2 to answer
    ans = 0
    for f in freq.values():
        ans += f * (f - 1) // 2
    return ans

# Example 1:
# A = [1, 0, 1, 1, 1, 1, 1]  should give 2 for X/Y = 1/2.
# Example 2:
# A = [1, 0, 0, 1, 1, 1, 1] should give 3 for X/Y = 1/2.
A = [1, 0, 0, 1, 1, 1, 1]  # Change A to test a different case.
X = 1
Y = 2

result = count_valid_subarrays(A, X, Y)
print("Number of valid subarrays =", result)
*/