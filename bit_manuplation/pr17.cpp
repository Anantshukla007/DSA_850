/*- Given an array ; make sure all the subarrays have xor ! = 0 

You are allowed to do this operation any number of times to achieve that goal :- Pick any index and replace it by any number < 10^10^10

Do this with a minimum number of operations. 
*/


/*#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // We'll use long long for prefix XOR values,
    // even though XOR is typically on integers, so that our computations 
    // are safe if numbers are large (and note the replacement number can be huge).
    long long cur = 0;
    unordered_set<long long> seen;
    seen.insert(0);
    
    int ops = 0; // number of operations
    for (int i = 0; i < n; i++) {
        cur ^= arr[i];
        if (seen.count(cur)) {
            // Duplicate found: perform an operation at index i.
            ops++;
            // Reset: we choose to change a[i] so that after modification the new prefix becomes 0.
            cur = 0;
            seen.clear();
            seen.insert(0);
        } else {
            seen.insert(cur);
        }
    }
    
    cout << ops << "\n";
    return 0;
}
*/
//python///

/*def min_operations(arr):
    cur = 0
    seen = {0}
    ops = 0

    for x in arr:
        cur ^= x
        if cur in seen:
            # Found a duplicate prefix XOR, so perform an operation:
            ops += 1
            # Reset the prefix chain.
            cur = 0
            seen = {0}
        else:
            seen.add(cur)
    return ops

if __name__ == '__main__':
    arr = list(map(int, input("Enter array elements separated by space: ").split()))
    result = min_operations(arr)
    print("Minimum number of operations required:", result)
*/