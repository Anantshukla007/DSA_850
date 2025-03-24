/*There is a rectangular brick wall in front of you with n rows of bricks. The ith row has some number of bricks each of the same height (i.e., one unit) but they can be of different widths. The total width of each row is the same.

Draw a vertical line from the top to the bottom and cross the least bricks. If your line goes through the edge of a brick, then the brick is not considered as crossed. You cannot draw a line just along one of the two vertical edges of the wall, in which case the line will obviously cross no bricks.

Given the 2D array wall that contains the information about the wall, return the minimum number of crossed bricks after drawing such a vertical line.*/


/*int solve(vector<vector<int>>walls){
	unordered_map<int,int>mp;
	int maxed = 0;
	
	for(auto row:wall){
		int sum =0;
		for(int i=0;i<row.size()-1;i++){
			sum += row[i];
			mp[sum]++;
			maxed = max(maxed,mp[sum]);
			
		}
	}
	
	return wall.size()-maxed;
}


int main() {
    // Example usage:
    vector<vector<int>> wall = {
        {1, 2, 2, 1},
        {3, 1, 2},
        {1, 3, 2},
        {2, 4},
        {3, 1, 2},
        {1, 3, 1, 1}
    };
    cout<<solve(wall);
    return 0;
}*/


/*class Solution:
    def leastBricks(self, wall):
        edge_count = {}
        max_edges = 0
        
        # Process each row in the wall.
        for row in wall:
            s = 0
            # Use a normal loop over indices, excluding the last element.
            for i in range(len(row) - 1):
                brick = row[i]
                s += brick
                edge_count[s] = edge_count.get(s, 0) + 1
                max_edges = max(max_edges, edge_count[s])
                
        # The answer is the number of rows minus the maximum count of aligned edges.
        return len(wall) - max_edges

# Example usage:
wall = [
    [1, 2, 2, 1],
    [3, 1, 2],
    [1, 3, 2],
    [2, 4],
    [3, 1, 2],
    [1, 3, 1, 1]
]
sol = Solution()
print(sol.leastBricks(wall))  # Expected output: minimal number of crossed bricks
*/