/*Given an array “arr[0..n-1]” of integers. The task is to calculate the sum of Bitwise OR of all pairs, i.e. calculate the sum of “arr[i] | arr[j]” for all the pairs in the given array where i < j. Here ‘|’ is a bitwise OR operator. The expected time complexity is O(n).

Examples: 

Input:  arr[] = {5, 10, 15}
Output: 15
Required Value = (5  |  10) + (5  |  15) + (10  |  15) 
               = 15 + 15 + 15 
               = 45
Input: arr[] = {1, 2, 3, 4}
Output: 3
Required Value = (1  |  2) + (1  |  3) + (1  |  4) + 
                 (2  |  3) + (2  |  4) + (3  |  4) 
               = 3 + 3 + 5 + 3 + 6 + 7
               = 27*/

/*#include <iostream>
#include <vector>
using namespace std;

int sumBitwiseORPairs(const vector<int>& arr) {
    int n = arr.size();
    int total_pairs = n * (n - 1) / 2;
    int total_sum = 0;

    // Iterate through 0 to 31 bits
    for (int bit = 0; bit < 32; bit++) {
        int count_zeros = 0;

        // Count elements with 0 at the current bit
        for (int num : arr) {
            if ((num & (1 << bit)) == 0) {
                count_zeros++;
            }
        }

        int zero_pairs = count_zeros * (count_zeros - 1) / 2;
        int pairs_with_one = total_pairs - zero_pairs;

        total_sum += pairs_with_one * (1 << bit);
    }

    return total_sum;
}

int main() {
    vector<int> arr1 = {5, 10, 15};
    cout << sumBitwiseORPairs(arr1) << endl; // Output: 45

    vector<int> arr2 = {1, 2, 3, 4};
    cout << sumBitwiseORPairs(arr2) << endl; // Output: 27

    return 0;
}
*/


/*def sum_bitwise_or_pairs(arr):
    n = len(arr)
    total_pairs = n * (n - 1) // 2
    total_sum = 0

    # Check each bit from 0 to 31
    for bit in range(32):
        count_zeros = 0

        # Count how many elements have 0 at current bit
        for num in arr:
            if not (num & (1 << bit)):
                count_zeros += 1

        zero_pairs = count_zeros * (count_zeros - 1) // 2
        pairs_with_one = total_pairs - zero_pairs

        total_sum += pairs_with_one * (1 << bit)

    return total_sum

# Example usage
print(sum_bitwise_or_pairs([5, 10, 15]))  # Output: 45
print(sum_bitwise_or_pairs([1, 2, 3, 4])) # Output: 27
*/