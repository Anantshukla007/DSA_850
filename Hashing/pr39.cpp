/*You are given a 0-indexed integer array arr, and an m x n integer matrix mat. arr and mat both contain all the integers in the range [1, m * n].

Go through each index i in arr starting from index 0 and paint the cell in mat containing the integer arr[i].

Return the smallest index i at which either a row or a column will be completely painted in mat.*/



/*int solve(vector<int>arr, vector<vector<int>>mat){
	map<int,int>mp;
	int n = mat.size();
	int m = mat[0].size();
	
	for(int i=0;i<n;i++){
		mp[arrr[i]] =i;
	}
	int ans = INT_MAX;
	
	for(int i=0;i<n;i++){
		int c = 0;
		for(int j =0;j<m;j++){
			c = max(c,mp[mat[i][j]]);
		}
		ans = max(ans,c);
		
	}
	for(int i=0;i<m;i++){
		int c = 0;
		for(int j =0;j<n;j++){
			c = max(c,mp[mat[j][i]]);
		}
		ans = max(ans,c);
		
	}
	return ans;
	
	
*/


///python
/*from typing import List

class Solution:
    def firstCompleteIndex(self, arr: List[int], mat: List[List[int]]) -> int:
        # Build a mapping from element to its index in arr.
        mp = {}
        for i, num in enumerate(arr):
            mp[num] = i
        
        n = len(mat)
        m = len(mat[0])
        ans = 10**9  # Use a large number
        
        # Process each row: find the maximum index among the elements in the row.
        for i in range(n):
            c = 0
            for j in range(m):
                c = max(c, mp[mat[i][j]])
            ans = min(ans, c)
        
        # Process each column: find the maximum index among the elements in the column.
        for j in range(m):
            c = 0
            for i in range(n):
                c = max(c, mp[mat[i][j]])
            ans = min(ans, c)
        
        return ans

# Example usage:
# sol = Solution()
# print(sol.firstCompleteIndex([2,7,3,8,1,4,6,5], [[3,8,1],[2,7,4],[6,5,0]]))
*/