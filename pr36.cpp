/*Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.

Return the number of nice sub-arrays.

 

Example 1:

Input: nums = [1,1,2,1,1], k = 3
Output: 2
Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].
Example 2:

Input: nums = [2,4,6], k = 1
Output: 0
Explanation: There are no odd numbers in the array.
Example 3:

Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
Output: 16*/


/*int solve(vector<int>nums,int k){
	int n = nums.size();
	int ans = 0;
	int odd  =0;
	int cnt = 0;
	int l =0;
	int r =0;
	while(r<n){
		if(nums[r]%2!=0){
			odd++;
			cnt=0;
		}
		while(odd>=k){
			cnt++;
			odd -= nums[l++]&&1;
		}
		ans += cnt;
		
	}
	return ans;
}*/

/*python*/


/*from typing import List

class Solution:
    def numberOfSubarrays(self, nums: List[int], k: int) -> int:
        n = len(nums)
        ans = odd = cnt = 0
        l = r = 0

        while r < n:
            if nums[r] % 2 != 0:  # Check if nums[r] is odd
                odd += 1
                cnt = 0

            while odd >= k:
                cnt += 1
                odd -= nums[l] % 2  # Reduce count if nums[l] is odd
                l += 1

            ans += cnt
            r += 1

        return ans
*/