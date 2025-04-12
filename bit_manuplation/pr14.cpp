/*Understanding - Given an array of size “N”; find sum of Bitwise OR of all the subarrays. 

[2 10]

-> (2) = 2 
-> (10) = 10
->(2,10) = 2 | 10 = 10


Sum = 2 + 10 + 10 = 22 */



/*#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Calculate total subarrays
    long long totalSubarrays = (long long)n * (n + 1) / 2;
    long long answer = 0;
    
    // Process each bit from 0 to 31 (sufficient for 32-bit integers)
    for (int bit = 0; bit < 32; bit++){
        long long subarraysWithoutBit = 0;
        int count = 0; // count of consecutive elements not having this bit
        
        // Traverse the array
        for (int i = 0; i < n; i++){
            // If the current element does NOT have the bit set, increase count
            if (!(arr[i] & (1 << bit))) {
                count++;
            } else {
                // End of a segment without the bit
                subarraysWithoutBit += (long long)count * (count + 1) / 2;
                count = 0; // reset counter
            }
        }
        // If the last segment reaches the end of the array
        subarraysWithoutBit += (long long)count * (count + 1) / 2;
        
        // Subarrays with at least one element having the bit set
        long long subarraysWithBit = totalSubarrays - subarraysWithoutBit;
        
        // Add the contribution of this bit to the final answer
        answer += subarraysWithBit * (1LL << bit);
    }
    
    cout << answer << endl;
    return 0;
}
*/



//python//


/*def sum_or_subarrays(arr):
    n = len(arr)
    total_subarrays = n * (n + 1) // 2
    result = 0
    
    # Process each bit from 0 to 31 (to cover 32-bit integers)
    for bit in range(32):
        subarrays_without_bit = 0
        count = 0  # length of current segment with the bit absent
        
        for num in arr:
            # Check if current number does NOT have the bit set
            if not (num & (1 << bit)):
                count += 1
            else:
                # End of a segment; add its subarray count
                subarrays_without_bit += count * (count + 1) // 2
                count = 0
        
        # If array ended with a segment without the bit
        subarrays_without_bit += count * (count + 1) // 2
        
        # Subarrays that include the bit at least once
        subarrays_with_bit = total_subarrays - subarrays_without_bit
        
        # Contribution of this bit
        result += subarrays_with_bit * (1 << bit)
    
    return result

if __name__ == '__main__':
    # Example: read input from the user as space-separated integers
    arr = list(map(int, input("Enter array elements separated by space: ").split()))
    print("The sum of bitwise OR of all subarrays is:", sum_or_subarrays(arr))
*/