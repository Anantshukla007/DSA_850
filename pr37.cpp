/*Find the number of subarrays such that their maximum is K - 

[8 2 1 3 4 5 1 10] 

K = 3

Output = 3. [3],[1 3],[2 1 3] 
*/


/*#include <bits/stdc++.h>
using namespace std;

int countSubarraysWithMaxK(vector<int>& arr, int K) {
    int n = arr.size();
    int result = 0;
    
    // Iterate over each index
    for (int i = 0; i < n; i++) {
        // Consider index i only if arr[i] == K and it's the last in a contiguous block of K's.
        if (arr[i] == K && (i == n - 1 || arr[i + 1] != K)) {
            int x = 0;
            // Count contiguous elements to the left that are strictly less than K.
            for (int j = i - 1; j >= 0 && arr[j] < K; j--) {
                x++;
            }
            int y = 0;
            // Count contiguous elements to the right that are strictly less than K.
            for (int j = i + 1; j < n && arr[j] < K; j++) {
                y++;
            }
            // Number of valid subarrays ending at this K is: x + y + (x * y) + 1.
            result += x + y + (x * y) + 1;
        }
    }
    
    return result;
}

int main(){
    vector<int> arr = {8, 2, 1, 3, 4, 5, 1, 10};
    int K = 3;
    cout << countSubarraysWithMaxK(arr, K) << endl; // Expected output: 3
    return 0;
}
*/


/*python*/


/*def count_subarrays_with_max_K(arr, K):
    n = len(arr)
    result = 0
    
    # Iterate over each index; consider the index if it holds K and is the last in a contiguous block of K's.
    for i in range(n):
        if arr[i] == K and (i == n - 1 or arr[i + 1] != K):
            # Count contiguous elements to the left that are strictly less than K.
            x = 0
            j = i - 1
            while j >= 0 and arr[j] < K:
                x += 1
                j -= 1

            # Count contiguous elements to the right that are strictly less than K.
            y = 0
            j = i + 1
            while j < n and arr[j] < K:
                y += 1
                j += 1

            # The formula: number = x + y + x*y + 1.
            result += x + y + (x * y) + 1

    return result

# Example usage:
arr = [8, 2, 1, 3, 4, 5, 1, 10]
K = 3
print(count_subarrays_with_max_K(arr, K))  # Expected output: 3
*/