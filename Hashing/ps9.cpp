/*You are given an integer array nums. You need to create a 2D array from nums satisfying the following conditions:

The 2D array should contain only the elements of the array nums.
Each row in the 2D array contains distinct integers.
The number of rows in the 2D array should be minimal.
Return the resulting array. If there are multiple answers, return any of them.

Note that the 2D array can have a different number of elements on each row.

 

Example 1:

Input: nums = [1,3,4,1,2,3,1]
Output: [[1,3,4,2],[1,3],[1]]
Explanation: We can create a 2D array that contains the following rows:
- 1,3,4,2
- 1,3
- 1
All elements of nums were used, and each row of the 2D array contains distinct integers, so it is a valid answer.
It can be shown that we cannot have less than 3 rows in a valid array.
Example 2:

Input: nums = [1,2,3,4]
Output: [[4,3,2,1]]
Explanation: All elements of the array are distinct, so we can keep all of them in the first row of the 2D array.*/



/*#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<int>> findMatrix(const vector<int>& nums) {
    // Step 1: Count frequencies.
    unordered_map<int, int> freq;
    for (int num : nums)
        freq[num]++;
    
    // Determine the number of rows needed.
    int k = 0;
    for (auto& p : freq)
        k = max(k, p.second);
    
    // Initialize k rows.
    vector<vector<int>> result(k);
    
    // This map tracks how many times we've placed a given number so far.
    unordered_map<int, int> occurrence;
    
    // Step 2: Distribute occurrences across the rows.
    // For each number, place it into row [current count] and then increment the count.
    for (int num : nums) {
        int row = occurrence[num];
        result[row].push_back(num);
        occurrence[num]++;
    }
    
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    vector<vector<int>> matrix = findMatrix(nums);
    
    // Output the result.
    // Each row is printed on a new line.
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
*/



/*def find_matrix(nums):
    from collections import Counter
    # Step 1: Count frequencies.
    freq = Counter(nums)
    # The minimal number of rows is the maximum frequency.
    k = max(freq.values()) if nums else 0
    
    # Initialize k rows.
    result = [[] for _ in range(k)]
    
    # This dictionary tracks how many times we've added a given number.
    occurrence = {}
    
    # Step 2: Distribute occurrences across the rows.
    for num in nums:
        # If this number hasn't been placed yet, start at row 0.
        occurrence[num] = occurrence.get(num, 0)
        row = occurrence[num]
        result[row].append(num)
        occurrence[num] += 1
        
    return result

if __name__ == "__main__":
    import sys
    data = sys.stdin.read().split()
    if not data:
        exit()
    
    n = int(data[0])
    nums = list(map(int, data[1:1+n]))
    
    matrix = find_matrix(nums)
    
    # Output the result: printing each row on a new line.
    for row in matrix:
        print(" ".join(map(str, row)))
*/