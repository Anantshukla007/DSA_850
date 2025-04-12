/*> Given an array of size N; find the sum of xor of all subarrays of the array 

solve this using c++ and python */




/*#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Input size of the array
    int n;
    cin >> n;
    
    // Read the array elements
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Create and compute the prefix XOR array (size n+1, where P[0] = 0)
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++){
        prefix[i + 1] = prefix[i] ^ arr[i];
    }
    
    // Compute the sum of XOR of all subarrays using bit contribution
    long long totalSum = 0;
    int size = prefix.size();  // size = n + 1
    for (int bit = 0; bit < 32; bit++){
        long long count1 = 0;
        // Count how many prefix XORs have the current bit set
        for (int j = 0; j < size; j++){
            if (prefix[j] & (1 << bit))
                count1++;
        }
        long long count0 = size - count1;
        totalSum += count1 * count0 * (1LL << bit);
    }
    
    // Output the total sum
    cout << totalSum << endl;
    return 0;
}
*/


//pyuthon///


/*def sum_xor_subarrays(arr):
    n = len(arr)
    
    # Build prefix XOR array: prefix[0] = 0, prefix[i+1] = prefix[i] ^ arr[i]
    prefix = [0] * (n + 1)
    for i in range(n):
        prefix[i+1] = prefix[i] ^ arr[i]
    
    total = 0
    size = len(prefix)  # which is n + 1
    
    # For each bit position, count the number of prefixes with and without the bit set
    for bit in range(32):
        count1 = sum(1 for x in prefix if x & (1 << bit))
        count0 = size - count1
        total += count1 * count0 * (1 << bit)
    
    return total

# Example usage:
if __name__ == '__main__':
    # Accept input from the user (space-separated integers)
    arr = list(map(int, input("Enter array elements separated by space: ").split()))
    result = sum_xor_subarrays(arr)
    print("The sum of XOR of all subarrays is:", result)
*/