/*Your team at Amazon wants to develop a service that takes in an array of integers where the ith element represents the category of the ith product viewed by the customer and returns the sum of the number of distinct categories on all contiguous segments of the array.
Given an array of n integers, categories, find the sum of the numbers of distinct integers over all of its subarrays.
Note: A subarray is a contiguous part of an array. For example, the subarrays of [1, 2, 3] are [1], [2], [3], [1, 2], [2, 3], [1, 2, 3].
Example:
Given an array of n = 3 integers, categories = [1, 2, 1]:*/



/*#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
using ll = long long;

int main() {
    // Example input:
    // n = 3, categories = [1, 2, 1]
    vector<int> categories = {1, 2, 1};
    int n = categories.size();

    // To store the last occurrence of each category.
    unordered_map<int, int> last;
    // Initialize last occurrence for any category as -1.
    
    ll totalDistinctSum = 0;
    ll prev_dp = 0; // dp[-1] is 0 by definition.

    // Process each index i.
    for (int i = 0; i < n; i++) {
        int c = categories[i];
        // If category c hasn't been seen before, last[c] defaults to -1.
        int lastOccurrence = last.count(c) ? last[c] : -1;
        // dp[i] = dp[i-1] + (i - lastOccurrence)
        ll cur_dp = prev_dp + (i - lastOccurrence);
        totalDistinctSum += cur_dp;
        
        // Update last occurrence for c.
        last[c] = i;
        // Save current dp for next iteration.
        prev_dp = cur_dp;
    }
    
    cout << "The sum of the distinct category counts over all subarrays is: " 
         << totalDistinctSum << endl;
    
    return 0;
}
*/



/*def sum_distinct_subarrays(categories):
    n = len(categories)
    last = {}  # Dictionary to store last index for each category.
    total = 0
    prev_dp = 0  # dp for previous index.
    
    for i, c in enumerate(categories):
        # Get last occurrence, default is -1 if c is new.
        last_occurrence = last.get(c, -1)
        # Calculate dp[i] = dp[i-1] + (i - last_occurrence)
        cur_dp = prev_dp + (i - last_occurrence)
        total += cur_dp
        
        # Update last occurrence for current category.
        last[c] = i
        
        # Set prev_dp for next iteration.
        prev_dp = cur_dp
    
    return total

# Example usage:
categories = [1, 2, 1]
result = sum_distinct_subarrays(categories)
print("The sum of the distinct category counts over all subarrays is:", result)
*/