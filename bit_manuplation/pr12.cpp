/*Alice, after a lot of learning about bit manipulation, got a random question about bit manipulation expression solving.
2 Bob gave him an expression:
(A|X)&(B|X)=C
And three variables, A, B, and C, asked him to find the minimum possible value of X, which satisfies the expression given by Bob.
If there is no possible value of X which satisfies the expression, then return -1.*/


/*long long findMinimalX(int A, int B, int C) {
    long long X = 0;
    // Iterate over 32 bits (or more if needed)
    for (int i = 0; i < 32; i++) {
        int mask = 1 << i;
        int a_bit = (A & mask) ? 1 : 0;
        int b_bit = (B & mask) ? 1 : 0;
        int c_bit = (C & mask) ? 1 : 0;
        int x_bit = 0;  // default value
        
        if (c_bit == 0) {
            // Must have A_i = 0 and B_i = 0; x_bit remains 0.
            if (a_bit == 1 || b_bit == 1) {
                return -1; // No solution.
            }
        } else { // c_bit == 1
            // We need both (A_i|X_i) and (B_i|X_i) to be 1.
            // If both A and B already have 1, we can choose x_bit = 0.
            // Otherwise, we must set x_bit = 1.
            if (a_bit == 1 && b_bit == 1) {
                x_bit = 0;
            } else {
                x_bit = 1;
            }
        }
        
        // Set the i-th bit of X accordingly.
        if (x_bit == 1) {
            X |= mask;
        }
    }
    return X;
}
*/


//python///


/*def find_minimal_x(A, B, C):
    X = 0
    # Iterate over 32 bits (or more if needed)
    for i in range(32):
        mask = 1 << i
        a_bit = (A & mask) >> i
        b_bit = (B & mask) >> i
        c_bit = (C & mask) >> i
        x_bit = 0  # default value

        if c_bit == 0:
            # Must have A_i = 0 and B_i = 0; x_bit remains 0.
            if a_bit == 1 or b_bit == 1:
                return -1  # No solution.
        else:  # c_bit == 1
            # We need both (A_i|X_i) and (B_i|X_i) to be 1.
            # If both A and B already have 1, we can choose x_bit = 0.
            # Otherwise, we must set x_bit = 1.
            if a_bit == 1 and b_bit == 1:
                x_bit = 0
            else:
                x_bit = 1

        # Set the i-th bit of X accordingly.
        if x_bit == 1:
            X |= mask

    return X

# Example usage
A = 5  # Binary: 0101
B = 7  # Binary: 0111
C = 7  # Binary: 0111
print(find_minimal_x(A, B, C))  # Output: 0
*/