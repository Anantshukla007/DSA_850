/* Find the number of ways to divide the given array in four equal parts. */


/*from typing import List

class Solution:
    def waysToDivideArray(self, A: List[int]) -> int:
        n = len(A)
        total = sum(A)
        
        # If total cannot be divided equally into 4 parts, no valid split exists.
        if total % 4 != 0:
            return 0
        
        part = total // 4
        cum_sum = 0
        
        # count1 counts the positions where cumulative sum equals part.
        count1 = 0
        # count2 counts the number of ways to choose (i, j) such that
        # cumulative sum at i equals part and cumulative at j equals 2*part.
        count2 = 0
        result = 0
        
        # Iterate until n-1 to ensure at least one element remains for the fourth part.
        for i in range(n - 1):
            cum_sum += A[i]
            
            # If this is a potential third cut (end of third part),
            # add the number of ways we can pick the first two cuts.
            if cum_sum == 3 * part:
                result += count2
            
            # If this is a valid end for the second segment,
            # then every way to split the first part can contribute.
            if cum_sum == 2 * part:
                count2 += count1
            
            # If this index can be the end of the first part,
            # increment the count for the first split.
            if cum_sum == part:
                count1 += 1
        
        return result

# Example usage:
if __name__ == "__main__":
    sol = Solution()
    
    # Example 1:
    A = [1, 3, 2, 1, 1, 2, 1, 1] 
    # Explanation:
    # For instance, if total = 12 then part = 3,
    # one valid split (using 0-indexed boundaries) might be:
    # - First part: A[0..1]         (sum = 1+3=4, so adjust input so that total becomes divisible by 4)
    # Use an input where sum(A) is divisible by 4!
    # For demonstration, let's use an input array where total is divisible by 4.
    
    # Example 2 (designed so total is divisible by 4)
    A = [1, 2, 1, 1, 1, 2, 1, 1]  # total = 10, which is not divisible by 4, so answer=0
    # Let’s use a better array:
    A = [1, 1, 1, 1, 1, 1, 1, 1]  # total = 8, part = 2.
    # Cumulative sums: [1,2,3,4,5,6,7,8]
    # Positions with cum_sum == 2: index 1; 
    # cum_sum == 4: index 3; 
    # cum_sum == 6: index 5.
    # There is only one valid way: first split after index1, second after index3, third after index5.
    
    print(sol.waysToDivideArray(A))  # Output should be 1
*/