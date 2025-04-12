/*Given an array of size “N” positive integers; find the longest subarray whose AND value will be maximum. 
*/


/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Step 1: Find the maximum element in the array
    int maxVal = *max_element(arr.begin(), arr.end());
    
    // Step 2: Find the longest contiguous segment where element == maxVal
    int longestLength = 0;
    int currentLength = 0;
    int startIndex = -1, bestStart = -1;  // for storing the best subarray indices
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] == maxVal) {
            if (currentLength == 0) startIndex = i;
            currentLength++;
        } else {
            if (currentLength > longestLength) {
                longestLength = currentLength;
                bestStart = startIndex;
            }
            currentLength = 0;
        }
    }
    // Check at the end (if the longest segment is at the end of the array)
    if (currentLength > longestLength) {
        longestLength = currentLength;
        bestStart = startIndex;
    }
    
    // Output the result:
    // Here we output the length and the subarray (indices from bestStart to bestStart + longestLength - 1)
    cout << "Maximum AND (Max Element): " << maxVal << "\n";
    cout << "Longest Subarray Length: " << longestLength << "\n";
    cout << "Subarray: ";
    for (int i = bestStart; i < bestStart + longestLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
*/



//python//


/*def longest_max_and_subarray(arr):
    # Step 1: Find the maximum element
    max_val = max(arr)
    
    longest_length = 0
    current_length = 0
    best_start = -1
    current_start = 0
    
    for i, num in enumerate(arr):
        if num == max_val:
            if current_length == 0:
                current_start = i
            current_length += 1
        else:
            if current_length > longest_length:
                longest_length = current_length
                best_start = current_start
            current_length = 0
            
    # Final check in case the longest segment is at the end
    if current_length > longest_length:
        longest_length = current_length
        best_start = current_start
    
    # Return the results as length and the subarray itself
    return max_val, longest_length, arr[best_start:best_start + longest_length]

if __name__ == '__main__':
    arr = list(map(int, input("Enter array elements separated by space: ").split()))
    max_and, length, subarray = longest_max_and_subarray(arr)
    print("Maximum AND (Max Element):", max_and)
    print("Longest Subarray Length:", length)
    print("Longest Subarray:", subarray)
*/