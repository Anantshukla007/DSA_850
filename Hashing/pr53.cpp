/*Good subarray is an array such that when it is removed rest of the array is strictly increasing
-> [1 2 3 405]
-> [0]; [0,5]; [40]; [405]; [340]; [3405]; [2340]; [23405]; [12340]; [123
4]
-> 10*/


/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read the size of the array.
    int n;
    cin >> n;
    
    // Read the array elements.
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    // Precompute prefix[]: prefix[i] is true if A[0...i] is strictly increasing.
    vector<bool> prefix(n, false);
    prefix[0] = true;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] && (A[i] > A[i-1]);
    }
    
    // Precompute suffix[]: suffix[i] is true if A[i...n-1] is strictly increasing.
    vector<bool> suffix(n, false);
    suffix[n-1] = true;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i+1] && (A[i] < A[i+1]);
    }
    
    long long count = 0;  // Count of good removals (subarrays)
    
    // Try all possible removal subarrays defined by indices [i, j].
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // Disallow removal of the entire array.
            if (i == 0 && j == n - 1)
                continue;
            
            bool valid = true;
            
            // If a prefix exists (i > 0), then it must be strictly increasing.
            if(i > 0 && !prefix[i-1])
                valid = false;
            
            // If a suffix exists (j < n-1), then it must be strictly increasing.
            if(j < n-1 && !suffix[j+1])
                valid = false;
            
            // If both prefix and suffix exist, we need the last element of the prefix
            // to be less than the first element of the suffix.
            if(i > 0 && j < n-1 && (A[i-1] >= A[j+1]))
                valid = false;
            
            if (valid)
                count++;
        }
    }
    
    // Output the total number of good subarrays.
    cout << count << endl;
    return 0;
}
*/


//python///

/*def count_good_removals(A):
    """
    Count the number of contiguous subarrays that can be removed so that the remaining 
    array (the prefix concatenated with the suffix) is strictly increasing.
    The removal of the entire array is not allowed.
    
    :param A: List[int] representing the array.
    :return: int, the number of good removals.
    """
    n = len(A)
    
    # Precompute prefix: prefix[i] is True if A[0...i] is strictly increasing.
    prefix = [False] * n
    prefix[0] = True
    for i in range(1, n):
        prefix[i] = prefix[i-1] and (A[i] > A[i-1])
    
    # Precompute suffix: suffix[i] is True if A[i...n-1] is strictly increasing.
    suffix = [False] * n
    suffix[n-1] = True
    for i in range(n-2, -1, -1):
        suffix[i] = suffix[i+1] and (A[i] < A[i+1])
    
    count = 0
    # Check every contiguous subarray defined by the removal indices i to j
    for i in range(n):
        for j in range(i, n):
            # Do not consider removal of the entire array.
            if i == 0 and j == n - 1:
                continue
            
            valid = True
            # If there is a prefix (i > 0), it must be strictly increasing.
            if i > 0 and not prefix[i-1]:
                valid = False
                
            # If there is a suffix (j < n-1), it must be strictly increasing.
            if j < n-1 and not suffix[j+1]:
                valid = False
                
            # If both prefix and suffix exist, ensure the last element of prefix is 
            # less than the first element of suffix.
            if i > 0 and j < n-1 and A[i-1] >= A[j+1]:
                valid = False
            
            if valid:
                count += 1
    return count

# Main execution:
if __name__ == "__main__":
    # Example:
    # For instance, input array: [1, 2, 3, 4, 0, 5]
    # You might take input from the user. Here we hard-code the example.
    # Expected output for [1,2,3,4,0,5] is 10.
    
    # Read input: first n then the array elements (space-separated)
    n = int(input().strip())
    A = list(map(int, input().split()))
    
    result = count_good_removals(A)
    print(result)
*/