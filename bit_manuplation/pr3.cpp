/*Given two positive integers num1 and num2, find the positive integer x such that:

x has the same number of set bits as num2, and
The value x XOR num1 is minimal.
Note that XOR is the bitwise XOR operation.

Return the integer x. The test cases are generated such that x is uniquely determined.

The number of set bits of an integer is the number of 1's in its binary representation.

 

Example 1:

Input: num1 = 3, num2 = 5
Output: 3
Explanation:
The binary representations of num1 and num2 are 0011 and 0101, respectively.
The integer 3 has the same number of set bits as num2, and the value 3 XOR 3 = 0 is minimal.
Example 2:

Input: num1 = 1, num2 = 12
Output: 3
Explanation:
The binary representations of num1 and num2 are 0001 and 1100, respectively.
The integer 3 has the same number of set bits as num2, and the value 3 XOR 1 = 2 is minimal.*/





/*#include <bits/stdc++.h>
using namespace std;

// Function to count set bits in an integer
int countSetBits(int n) {
    return __builtin_popcount(n);
}

// Main function to find x
int minimizeXor(int num1, int num2) {
    int setBits = countSetBits(num2); // target number of 1s
    int result = 0;

    // Set bits in result starting from most significant bit of num1
    for (int i = 31; i >= 0 && setBits > 0; i--) {
        if ((num1 & (1 << i)) != 0) {
            result |= (1 << i); // Set the i-th bit in result
            setBits--;
        }
    }

    // If still some bits are left to set, start from least significant bit
    for (int i = 0; i < 32 && setBits > 0; i++) {
        if ((result & (1 << i)) == 0) {
            result |= (1 << i);
            setBits--;
        }
    }

    return result;
}

int main() {
    int num1 = 1, num2 = 12;
    cout << "Result: " << minimizeXor(num1, num2) << endl; // Output: 3
    return 0;
}
*/

//python///

/*def minimize_xor(num1: int, num2: int) -> int:
    set_bits = bin(num2).count('1')  # Count of 1s needed
    result = 0

    # Set bits starting from most significant bit of num1
    for i in range(31, -1, -1):
        if (num1 & (1 << i)) and set_bits > 0:
            result |= (1 << i)
            set_bits -= 1

    # If some bits are still needed, set from least significant bit
    for i in range(32):
        if set_bits == 0:
            break
        if (result & (1 << i)) == 0:
            result |= (1 << i)
            set_bits -= 1

    return result

# Example
num1 = 1
num2 = 12
print("Result:", minimize_xor(num1, num2))  # Output: 3
*/