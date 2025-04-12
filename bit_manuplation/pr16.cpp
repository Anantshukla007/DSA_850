/*Find the number of subarrays in an array whose bitwise Xor has an odd number of set bits. 

Example. -> 
[1 2 4]
-> 4 (There are 4 subarrays whose bitwise Xor has an odd number of set bits.) 

[1 5 5] 
*/

/*#include <iostream>
#include <vector>
using namespace std;

// Function to compute parity: returns 1 if number of set bits is odd, else returns 0.
int parity(unsigned int x) {
    int par = 0;
    while(x) {
        par ^= (x & 1);
        x >>= 1;
    }
    return par;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Create prefix XOR array, with p[0] = 0.
    vector<int> prefix(n+1, 0);
    for (int i = 0; i < n; i++){
        prefix[i+1] = prefix[i] ^ arr[i];
    }
    
    // Count how many prefix XORs have odd parity and even parity.
    long long countEven = 0, countOdd = 0;
    for (int i = 0; i <= n; i++){
        if (parity(prefix[i]) == 0)
            countEven++;
        else
            countOdd++;
    }
    
    // The result is the product of even and odd counts.
    long long result = countEven * countOdd;
    cout << result << endl;
    
    return 0;
}
*/


/*def parity(x):
    # Returns 1 if x has an odd number of set bits, else 0.
    par = 0
    while x:
        par ^= (x & 1)
        x //= 2
    return par

def count_odd_xor_subarrays(arr):
    n = len(arr)
    
    # Build prefix XOR array.
    prefix = [0] * (n + 1)
    for i in range(n):
        prefix[i+1] = prefix[i] ^ arr[i]
    
    count_even = 0
    count_odd = 0
    for val in prefix:
        if parity(val) == 0:
            count_even += 1
        else:
            count_odd += 1
    
    # Every pair (even, odd) gives a subarray with odd popcount XOR.
    return count_even * count_odd

if __name__ == '__main__':
    arr = list(map(int, input("Enter array elements separated by space: ").split()))
    result = count_odd_xor_subarrays(arr)
    print("Number of subarrays with XOR having an odd number of set bits:", result)
*/