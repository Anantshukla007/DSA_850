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



/*vector<vector<int>>solve(vector<int>nums){
	unordered_map<int,int>mp;
	for(int i:nums){
		mp[i]++;
	}
	
	
	vector<vector<int>>ans;
	while(mp.size()){
		vector<int>ans1;
		for(auto i:mp){
			ans1.push_back(i.first);
		}
		for(int j:ans1){
			if(!--mp[j])mp.erase(j);
		}
		ans.push_back(ans1);
	}
	
	return ans;
}*/
////python///////


/*class Solution:
    def findMatrix(self, nums):
        # Build a frequency dictionary
        mp = {}
        for num in nums:
            mp[num] = mp.get(num, 0) + 1

        ans = []
        # Process until the dictionary is empty
        while mp:
            row = []
            # Traverse the dictionary manually to collect keys into the row
            for key in mp:
                row.append(key)
            # For each element in the row, decrement its frequency in the dictionary
            for num in row:
                mp[num] -= 1
                if mp[num] == 0:
                    del mp[num]
            ans.append(row)
        return ans

# Example usage:
sol = Solution()
print(sol.findMatrix([1, 3, 4, 1, 2, 3, 1]))
# One possible output: [[1, 3, 4, 2], [1, 3], [1]]
*/