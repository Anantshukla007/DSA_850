/*Understanding of the problem:-> We are given two array a and b ; for all the pairs (i,j) find the sum of (a[i] xor b[j])

A = [ 1 2 3 ]

B = [5 5 5]
*/


/*long long optimizedXorSum(const vector<int>& A, const vector<int>& B) {
    int n = A.size();
    int m = B.size();
    long long result = 0;
    const int BITS = 32;  // Assuming 32-bit integers

    // Iterate over each bit position.
    for (int k = 0; k < BITS; k++) {
        long long countA = 0;
        long long countB = 0;
        int mask = 1 << k;  // Bit mask to isolate the k-th bit

        // Count in A: how many numbers have the k-th bit set.
        for (int num : A) {
            if (num & mask)
                countA++;
        }
        
        // Count in B: how many numbers have the k-th bit set.
        for (int num : B) {
            if (num & mask)
                countB++;
        }
        
        // The number of pairs with differing bits at position k.
        long long diffPairs = countA * (m - countB) + (n - countA) * countB;
        
        // Add to the result the contribution from the k-th bit.
        result += ((long long)1 << k) * diffPairs;
    }
    
    return result;
}
*/



///python///
/*def optimized_xor_sum(A, B):
    n = len(A)
    m = len(B)
    result = 0
    BITS = 32  # Assuming 32-bit integers

    for k in range(BITS):
        mask = 1 << k
        countA = sum(1 for num in A if num & mask)
        countB = sum(1 for num in B if num & mask)

        # Number of pairs with differing k-th bit
        diff_pairs = countA * (m - countB) + (n - countA) * countB

        # Contribution of this bit to the final XOR sum
        result += (1 << k) * diff_pairs

    return result

# Example usage
A = [1, 2, 3]
B = [4, 5]
print(optimized_xor_sum(A, B))
*/