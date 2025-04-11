/*Given an array arrof nintegers that contains all the integers from 1 to n and an integer & find the smallest MEX of a subarray of the array. That is, in a list containing MEX of all the subarrays, find the smallest integer.
The MEX of an array is the smallest positive integer not present in the array For example, the MEX of [1, 2, 3] is 4 and that of [1, 3, 4, 5] is 2.
A subarray is any contiguous segment of the array.
Example
Suppose n=4, arr[3, 2, 1, 4], and k -5,
The MEX of each subarray is:
Subarrays [3], [2], [1] and [4] have MEX 1, 1, 2, and 1 respectively.
Subarrays [3, 2], [2, 1] and [1, 4] have MEX 1, 3, and 2 respectively.
Subarrays [3, 2, 1] and [2, 1, 4] have MEX 4 and 3 respectively.
Subarray [3, 2, 1, 4] has MEX 5. */



/*#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> arr(n+1);
    // pos[i] will store the position (1-indexed) of number i.
    vector<ll> pos(n+1, 0);
    
    // Read the permutation (1-indexed) and record positions.
    for (ll i = 1; i <= n; i++){
        cin >> arr[i];
        pos[arr[i]] = i;
    }
    
    ll k;
    cin >> k;  // k is used to choose the kth subarray group
    
    // We'll store counts in answer[m] for MEX = m (for m=1 to n+1)
    // (We use indices 1..n+1; extra space allocated as needed.)
    vector<ll> answer(n+2, 0);
    
    // ---- Count subarrays that have MEX = 1 ----
    // MEX 1 means subarrays that do NOT contain 1.
    // The number 1 appears at pos[1]. So any subarray completely before pos[1]
    // or completely after pos[1] does not contain 1.
    ll L = pos[1], R = pos[1];
    ll leftCount = L - 1;        // elements before pos[1]
    ll rightCount = n - R;         // elements after pos[1]
    // Number of subarrays in a contiguous block of length X is X*(X+1)/2.
    answer[1] = (leftCount * (leftCount + 1) / 2) + (rightCount * (rightCount + 1) / 2);
    
    // ---- For m = 2 to n, count subarrays with MEX = m ----
    // Maintain the minimal block [L, R] that contains numbers 1 .. m-1.
    for (ll m = 2; m <= n; m++){
        ll id = pos[m];  // position of number m
        ll count = 0;
        if (id < L) {
            // Case A: pos[m] is to the left of our current block.
            ll gap = L - id;  // number of positions between pos[m] and L
            // We cannot choose pos[m] itself, so available choices = gap (or gap exactly)
            // Right side is free to extend from R to n.
            count = gap * (n - R + 1);
        }
        else if (id > R) {
            // Case B: pos[m] is to the right of our current block.
            ll gap = id - R;
            count = L * gap;
        }
        else {
            // If pos[m] lies between L and R, then every subarray covering [L, R]
            // must include m, so no additional subarray gives MEX = m.
            count = 0;
        }
        answer[m] = count;
        // Update the block [L, R] to include m.
        L = min(L, id);
        R = max(R, id);
    }
    
    // Finally, the entire array has MEX = n+1.
    answer[n+1] = 1;
    
    // ---- Determine smallest MEX such that the cumulative count >= k
    ll cumulative = 0;
    ll resultMex = 0;
    for (ll m = 1; m <= n+1; m++){
        cumulative += answer[m];
        if (cumulative >= k){
            resultMex = m;
            break;
        }
    }
    
    cout << resultMex << "\n";
    return 0;
}
*/



//python///


/*def main():
    import sys
    input = sys.stdin.readline
    
    n = int(input())
    arr = [0] * (n + 1)
    pos = [0] * (n + 1)
    
    # Read the permutation and record the position for each number.
    for i in range(1, n+1):
        arr[i] = int(input())
        pos[arr[i]] = i
        
    k = int(input())
    
    # answer[m] will count subarrays with MEX = m (m = 1 .. n+1)
    answer = [0] * (n + 2)
    
    # For MEX = 1: subarrays that do not contain 1.
    # The number 1 appears at pos[1].
    L = pos[1]
    R = pos[1]
    leftCount = L - 1    # elements before pos[1]
    rightCount = n - R   # elements after pos[1]
    answer[1] = (leftCount * (leftCount + 1) // 2) + (rightCount * (rightCount + 1) // 2)
    
    # For m = 2 to n, count subarrays with MEX = m.
    for m in range(2, n+1):
        id = pos[m]
        if id < L:
            gap = L - id
            count = gap * (n - R + 1)
        elif id > R:
            gap = id - R
            count = L * gap
        else:
            count = 0
        answer[m] = count
        L = min(L, id)
        R = max(R, id)
    
    # The full array has MEX = n+1.
    answer[n+1] = 1
    
    # Now choose the smallest MEX such that the cumulative number of subarrays is >= k.
    cumulative = 0
    resultMex = 0
    for m in range(1, n+2):
        cumulative += answer[m]
        if cumulative >= k:
            resultMex = m
            break
            
    print(resultMex)

if __name__ == '__main__':
    main()
*/