/*Given an array find two subarrays of maximum sum which are not intersecting 
*/

/*#include <bits/stdc++.h>
using namespace std;

// Function to compute prefix maximum sum subarray
vector<int> calcprefix(vector<int> &nums) {
    int n = nums.size();
    vector<int> prefixmax(n, 0);
    int currmax = nums[0];
    prefixmax[0] = currmax;

    for (int i = 1; i < n; i++) {
        currmax = max(nums[i] + currmax, nums[i]);
        prefixmax[i] = currmax;
    }
    
    return prefixmax;
}

// Function to compute suffix maximum sum subarray
vector<int> calcsuffix(vector<int> &nums) {
    int n = nums.size();
    vector<int> suffixmax(n, 0);
    int currmax = nums[n - 1];
    suffixmax[n - 1] = currmax;

    for (int i = n - 2; i >= 0; i--) {
        currmax = max(nums[i], nums[i] + currmax);
        suffixmax[i] = currmax;
    }

    return suffixmax;
}

// Function to solve the problem
int solve(vector<int> &nums) {
    int n = nums.size();
    vector<int> temppre = calcprefix(nums);
    vector<int> tempsuf = calcsuffix(nums);

    vector<int> maxpre(n, 0), maxsuff(n, 0);
    maxpre[0] = temppre[0];
    maxsuff[n - 1] = tempsuf[n - 1];

    // Compute max prefix values
    for (int i = 1; i < n; i++) {
        maxpre[i] = max(maxpre[i - 1], temppre[i]);
    }

    // Compute max suffix values
    for (int i = n - 2; i >= 0; i--) {
        maxsuff[i] = max(maxsuff[i + 1], tempsuf[i]);
    }

    int ans = 0;

    // Compute maximum sum with one element removal
    for (int i = 0; i < n - 1; i++) {  // Ensure i+1 does not go out of bounds
        ans = max(ans, maxpre[i] + maxsuff[i + 1]);
    }

    return ans;
}

// Main function
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << solve(arr) << endl;
    return 0;
}
*/



/*python*/


/*def calcprefix(nums):
    n = len(nums)
    prefixmax = [0] * n
    currmax = nums[0]
    prefixmax[0] = currmax

    for i in range(1, n):
        currmax = max(nums[i] + currmax, nums[i])
        prefixmax[i] = currmax
    
    return prefixmax

def calcsuffix(nums):
    n = len(nums)
    suffixmax = [0] * n
    currmax = nums[n - 1]
    suffixmax[n - 1] = currmax

    for i in range(n - 2, -1, -1):
        currmax = max(nums[i], nums[i] + currmax)
        suffixmax[i] = currmax

    return suffixmax

def solve(nums):
    n = len(nums)
    temppre = calcprefix(nums)
    tempsuf = calcsuffix(nums)

    maxpre = [0] * n
    maxsuff = [0] * n

    maxpre[0] = temppre[0]
    maxsuff[n - 1] = tempsuf[n - 1]

    # Compute max prefix values
    for i in range(1, n):
        maxpre[i] = max(maxpre[i - 1], temppre[i])

    # Compute max suffix values
    for i in range(n - 2, -1, -1):
        maxsuff[i] = max(maxsuff[i + 1], tempsuf[i])

    ans = 0

    # Compute maximum sum with one element removal
    for i in range(n - 1):  # Ensure i+1 does not go out of bounds
        ans = max(ans, maxpre[i] + maxsuff[i + 1])

    return ans

# Input handling
n = int(input())
arr = list(map(int, input().split()))
print(solve(arr))
*/