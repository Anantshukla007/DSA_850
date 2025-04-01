/*Understanding - Divide the array in “k” parts such that the sum of all the parts is maximum.

Sum of a part [a1 a2 a3 a4……] = a1 -a2 + a3 -a4…….. 

What if all the numbers are positive? 
*/



/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSumDivide(const vector<int>& nums, int k) {
    int n = nums.size();
    vector<vector<int>> dp(n + 1, vector<int>(2, 0));

    for (int i = 1; i <= n; ++i) {
        dp[i][0] = nums[i - 1] + max(dp[i - 1][0], dp[i - 1][1]);
        dp[i][1] = -nums[i - 1] + dp[i - 1][0];
    }

    return max(dp[n][0], dp[n][1]);
}

int main() {
    vector<int> nums = {1, -2, 3};
    int k = 2;

    int maxSum = maxSumDivide(nums, k);
    cout << "Ans is "<< maxSum << endl;

    return 0;
}
*/



/*pyrhob*/


/*def max_sum_divide(nums, k):
    n = len(nums)
    dp = [[0, 0] for _ in range(n + 1)]
    
    for i in range(1, n + 1):
        dp[i][0] = nums[i - 1] + max(dp[i - 1][0], dp[i - 1][1])
        dp[i][1] = -nums[i - 1] + dp[i - 1][0]
    
    return max(dp[n][0], dp[n][1])

if __name__ == '__main__':
    nums = [1, -2, 3]
    k = 2  # k is provided but not used in the logic
    max_sum = max_sum_divide(nums, k)
    print("Ans is", max_sum)
*/