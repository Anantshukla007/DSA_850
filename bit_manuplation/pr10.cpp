/*Understanding -> We are given an array of size “N”. We have to find  a group of numbers such that their bitwise AND ! = 0 ; the group should be as large as possible. 

1<=N<=100000
*/


/*#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int find_max_group(const vector<int>& arr) {
    int n = arr.size();
    int max_length = 0;

    // Map to store the first index of each bit set
    unordered_map<int, int> bit_first_pos;

    // Iterate over each element in the array
    for (int i = 0; i < n; i++) {
        int num = arr[i];

        // For each bit from 0 to 31 (assuming 32-bit integers)
        for (int bit = 0; bit < 32; bit++) {
            if (num & (1 << bit)) {
                // If the ith bit is set in the current number
                if (bit_first_pos.find(bit) == bit_first_pos.end()) {
                    // If this bit is set for the first time, store the index
                    bit_first_pos[bit] = i;
                }
                
                // Calculate the length of the group where this bit is set
                max_length = max(max_length, i - bit_first_pos[bit] + 1);
            }
        }
    }

    return max_length;
}

int main() {
    vector<int> arr = {4, 5, 7, 2, 3}; // Sample input array
    cout << "Maximum group size: " << find_max_group(arr) << endl;
    return 0;
}
*/



/*def find_max_group(arr):
    n = len(arr)
    max_length = 0
    
    # Dictionary to store the first index of each bit being set
    bit_first_pos = {}
    
    # Iterate over each element in the array
    for i in range(n):
        num = arr[i]
        
        # For each bit from 0 to 31 (assuming 32-bit integers)
        for bit in range(32):
            if num & (1 << bit):
                # If the ith bit is set in the current number
                if bit not in bit_first_pos:
                    # If this bit is set for the first time, store the index
                    bit_first_pos[bit] = i
                
                # Calculate the length of the group where this bit is set
                max_length = max(max_length, i - bit_first_pos[bit] + 1)
    
    return max_length


# Example usage
arr = [4, 5, 7, 2, 3]  # Sample input array
print(f"Maximum group size: {find_max_group(arr)}")
*/