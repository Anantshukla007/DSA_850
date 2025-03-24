/*https://leetcode.com/contest/weekly-contest-365/problems/maximum-value-of-an-ordered-triplet-i/ 
*/


/*int solve(vector<int>nums){
	int res =0;
	int n = nums.size();
	
	vector<int>maxir(n);
	
	int curr = nums[n-1];
	
	for(int i =n-1;i>=0;i--){
		curr = max(curr,nums[i]);
		maxir[i] = curr;
	}
	
	int maxil = nums[0];
	for(int i=1;i<n-1;i++){
		int curr = (maxil-nums[i])*maxir[i+1];
		maxil = max(maxil,nums[i]);
		
	}
	return res;
}*/


/*python*/


/*def solve(arr):
    n = len(arr)
    
    # Create the maxir array (max from right)
    maxir = [0] * n
    maxir[n-1] = arr[n-1]
    
    currmax = arr[n-1]
    for i in range(n-2, -1, -1):
        currmax = max(currmax, arr[i])
        maxir[i] = currmax

    # Compute max product
    ans = 0
    maxl = arr[0]
    
    for i in range(1, n-1):
        curr = (maxl - arr[i]) * maxir[i+1]
        ans = max(ans, curr)
        maxl = max(maxl, arr[i])
    
    return ans

# User input handling
n = int(input("Enter the size of the array: "))
arr = list(map(int, input("Enter the array elements: ").split()))

# Ensure valid input length
if len(arr) != n:
    print("Error: The number of elements does not match the given size.")
else:
    print("Maximum computed value:", solve(arr))
*/