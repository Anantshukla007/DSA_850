/*Given an array arr[] of size n. Calculate the sum of Bitwise ANDs ie: calculate sum of arr[i] & arr[j] for all the pairs in the given array arr[] where i < j.

Example 1:

Input:
n = 3
arr = {5, 10, 15}
Output:
15
Explanation:
The bitwise Ands of all pairs where i<j are (5&10) = 0, (5&15) = 5 and (10&15) = 10.
Therefore, the total sum = (0+5+10) = 15.*/


/*#include <iostream>
#include <vector>
using namespace std;

int sumOfBitwiseAnds(const vector<int>& arr) {
    int n = arr.size();
    int total_sum = 0;

    // Iterate over each bit position (32-bit integer, so we check 32 bits)
    for (int bit = 0; bit < 32; bit++) {
        int count = 0;
        
        // Count how many numbers have the current bit set
        for (int i = 0; i < n; i++) {
            if (arr[i] & (1 << bit)) {
                count++;
            }
        }

        // Calculate the number of pairs where both have the current bit set
        int pair_count = count * (count - 1) / 2;
        
        // Add the contribution of this bit to the total sum
        total_sum += pair_count * (1 << bit);
    }

    return total_sum;
}

int main() {
    vector<int> arr = {5, 10, 15};
    cout << "Sum of Bitwise ANDs: " << sumOfBitwiseAnds(arr) << endl;
    return 0;
}
*/


/*def sum_of_bitwise_ands(arr):
    n = len(arr)
    total_sum = 0

    # Iterate over each bit position (32-bit integer, so we check 32 bits)
    for bit in range(32):
        count = 0
        
        # Count how many numbers have the current bit set
        for num in arr:
            if num & (1 << bit):
                count += 1

        # Calculate the number of pairs where both have the current bit set
        pair_count = count * (count - 1) // 2
        
        # Add the contribution of this bit to the total sum
        total_sum += pair_count * (1 << bit)

    return total_sum

# Example usage
arr = [5, 10, 15]
print("Sum of Bitwise ANDs:", sum_of_bitwise_ands(arr))
*/



/**/