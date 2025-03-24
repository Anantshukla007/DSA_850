/*Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

 

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
Example 3:

Input: nums = [1,0,1,2]
Output: 3*/


/*#include <bits/stdc++.h>
using namespace std;

int longest(vector<int> nums) {
    int n = nums.size();
    unordered_map<int, int> mp;

    // Mark presence of each number
    for (int i = 0; i < n; i++) {
        mp[nums[i]] = 1;
    }

    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        int val = nums[i];

        // Start counting only if 'val-1' is not in the map (start of a sequence)
        if (mp.find(val - 1) == mp.end()) {
            int curr = val;
            int count = 0;

            while (mp.find(curr) != mp.end()) {
                count++;
                mp.erase(curr); // Remove to avoid duplicate processing
                curr++;
            }

            ans = max(ans, count); // Update the longest sequence length
        }
    }
    
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Length of longest consecutive sequence: " << longest(nums) << endl;
    
    return 0;
}
*/


/*python*/


/*def solve(nums):
    num_set = set(nums)  # Use a set for quick lookup
    ans = 0

    for num in nums:
        if num - 1 not in num_set:  # Start counting from the beginning of a sequence
            curr = num
            count = 0

            while curr in num_set:
                count += 1
                num_set.remove(curr)  # Remove to prevent duplicate processing
                curr += 1

            ans = max(ans, count)

    return ans

# Input
n = int(input())
arr = list(map(int, input().split()))

# Output
print(solve(arr))
*/