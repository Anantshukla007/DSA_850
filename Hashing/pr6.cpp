/*Find count of shortest/largest subarrays with sum k in given array

*/


/*#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

pair<int, int> findSubarraySizes(int n, int k, const vector<int>& arr) {
    unordered_map<int, int> mp;
    unordered_map<int, int> mp2;
    mp[0] = 0;
    int pSum = 0;
    int maxLength = 0;
    int minLength = INT_MAX;

    for (int j = 1; j <= n; j++) {
        pSum += arr[j - 1];
        int x = pSum - k;

        if (mp.find(x) != mp.end()) {
            int i = mp[x] + 1;
            int curLength = j - i + 1;
            if (curLength > maxLength) {
                maxLength = curLength;
            }
        }

        if (mp2.find(x) != mp2.end()) {
            int i = mp2[x] + 1;
            int curLength = j - i + 1;
            if (curLength < minLength) {
                minLength = curLength;
            }
        }

        if (mp.find(pSum) == mp.end())
            mp[pSum] = j;

        mp2[pSum] = j;
    }

    return {maxLength, minLength};
}

int countSubarraysWithLength(int n, int k, const vector<int>& arr, int targetLength) {
    if (targetLength == 0) return 0;
    int count = 0;
    int windowSum = 0;

    for (int j = 0; j < targetLength; j++) {
        windowSum += arr[j];
    }

    if (windowSum == k) {
        count++;
    }

    for (int j = targetLength; j < n; j++) {
        windowSum += arr[j] - arr[j - targetLength];
        if (windowSum == k) {
            count++;
        }
    }

    return count;
}

int main() {
    int n = 6;
    int k = 5;
    vector<int> arr = {1, 2, 3, 4, 2, 5};

    auto [maxLength, minLength] = findSubarraySizes(n, k, arr);
    int maxCount = countSubarraysWithLength(n, k, arr, maxLength);
    int minCount = countSubarraysWithLength(n, k, arr, minLength);

    cout << "Max Length: " << maxLength << " Count: " << maxCount << endl;
    cout << "Min Length: " << minLength << " Count: " << minCount << endl;

    return 0;
}
*/


/*ptyhon*/


/*def solve(arr, k):
    mp = {}  # To store first occurrence of prefix sum
    mp1 = {}  # To store first occurrence for smallest subarray
    n = len(arr)
    su = 0
    smallest = float('inf')
    largest = 0  # Should start at 0 instead of infinity
    
    mp[0] = -1  # Important: To handle cases where subarray starts from index 0

    for i in range(n):
        su += arr[i]
        comp = su - k

        # Check for the longest subarray
        if comp in mp:
            le = i - mp[comp]
            largest = max(largest, le)
        
        # Store first occurrence of prefix sum for the largest subarray
        if su not in mp:
            mp[su] = i  

        # Check for the shortest subarray
        if comp in mp1:
            le = i - mp1[comp]
            smallest = min(smallest, le)
        
        # Store first occurrence of prefix sum for the smallest subarray
        if su not in mp1:
            mp1[su] = i  

    # If smallest is still infinity, it means no valid subarray was found
    if smallest == float('inf'):
        smallest = -1
    
    return smallest, largest


def solu(arr, k, target):
    n = len(arr)
    if target == -1:  # If no valid subarray found, return 0
        return 0

    su = 0
    count = 0
    
    # First window sum
    for i in range(target):
        su += arr[i]
    if su == k:
        count += 1
    
    # Sliding window approach
    for i in range(target, n):
        su += arr[i] - arr[i - target]
        if su == k:
            count += 1

    return count


# Input handling
n = int(input())
k = int(input())
arr = list(map(int, input().split()))

smallest, largest = solve(arr, k)

print(solu(arr, k, smallest))
print(solu(arr, k, largest))
*/