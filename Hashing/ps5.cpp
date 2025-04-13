/*Given an array arr of n integers, find the number of its subarrays such that removing the subarray creates a non-empty array that is sorted in increasing order.
Note: A subarray is defined as any contiguous segment of the array.
Example
Suppose n = 4 and arr = [1, 2, 1, 2]


*//*#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Example input: n = 4, arr = [1, 2, 1, 2]
    vector<int> arr = {1, 2, 1, 2};
    int n = arr.size();
    
    // Precompute L: L[i] is true if arr[0..i] is strictly increasing.
    vector<bool> L(n, false);
    L[0] = true;
    for(int i = 1; i < n; i++){
        L[i] = (L[i-1] && (arr[i-1] < arr[i]));
    }
    
    // Precompute R: R[i] is true if arr[i..n-1] is strictly increasing.
    vector<bool> R(n, false);
    R[n-1] = true;
    for(int i = n - 2; i >= 0; i--){
        R[i] = (R[i+1] && (arr[i] < arr[i+1]));
    }
    
    long long count = 0;
    
    // Iterate over all subarrays [l, r] to remove.
    // Avoid the removal [0, n-1] (which would leave an empty array).
    for(int l = 0; l < n; l++){
        for (int r = l; r < n; r++){
            if(l == 0 && r == n - 1) continue;  // Skip removal of entire array.
            
            bool valid = true;
            // Check prefix
            if(l > 0 && !L[l - 1])
                valid = false;
            // Check suffix
            if(r < n - 1 && !R[r + 1])
                valid = false;
            // Check join condition if both parts exist
            if(l > 0 && r < n - 1 && !(arr[l - 1] < arr[r + 1]))
                valid = false;
            
            if(valid)
                count++;
        }
    }
    
    cout << "Number of valid removal subarrays = " << count << endl;
    // For the example [1, 2, 1, 2], the output should be 5.
    return 0;
}
*/



/*def count_removal_subarrays(arr):
    n = len(arr)
    
    # Compute L: L[i] is True if arr[0...i] is strictly increasing.
    L = [False] * n
    L[0] = True
    for i in range(1, n):
        L[i] = L[i-1] and (arr[i-1] < arr[i])
    
    # Compute R: R[i] is True if arr[i...n-1] is strictly increasing.
    R = [False] * n
    R[n-1] = True
    for i in range(n-2, -1, -1):
        R[i] = R[i+1] and (arr[i] < arr[i+1])
        
    count = 0
    # Try every subarray removal candidate [l, r].
    for l in range(n):
        for r in range(l, n):
            # Do not remove the entire array.
            if l == 0 and r == n-1:
                continue
            
            valid = True
            # If there is a left part, it must be sorted.
            if l > 0 and not L[l-1]:
                valid = False
            # If there is a right part, it must be sorted.
            if r < n-1 and not R[r+1]:
                valid = False
            # If both parts exist, the last element of the prefix must be less than the first element of the suffix.
            if l > 0 and r < n-1 and not (arr[l-1] < arr[r+1]):
                valid = False
            
            if valid:
                count += 1
    return count

# Example usage:
arr = [1, 2, 1, 2]
result = count_removal_subarrays(arr)
print("Number of valid removal subarrays =", result)
# Expected output is 5.
*/



