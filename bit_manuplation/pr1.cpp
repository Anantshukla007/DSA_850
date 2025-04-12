/*Given two integers : 

Y and K ; find minimum possible such that Z ; such that 

Y | Z = K ; where “|” means BitWise OR 

If it is not possible then print -1. 

Example:- 

Y = 10
K = 15 

Output - Z = 5 
As (10 | 5) = 15 
*/


/*#include <iostream>
using namespace std;

int findMinZ(int Y, int K) {
    // Check if K has any bit set to 1 that is NOT set in Y
    // In that case, we can try to turn them ON using Z
    if ((Y | K) != K) {
        return -1; // It's impossible because Y already has 1s where K has 0s
    }

    // Z should only have 1s in places where:
    // - K has 1, and
    // - Y has 0 (so that OR will flip them to 1)
    int Z = K & (~Y);
    return Z;
}

int main() {
    int Y = 10, K = 15;
    int Z = findMinZ(Y, K);
    cout << "Minimum Z: " << Z << endl;
    return 0;
}
*/


//python///


/*def find_min_z(Y, K):
    # If Y has any 1 where K has 0, it's impossible to get K via OR
    if (Y | K) != K:
        return -1

    # Z should turn on only those bits which are 1 in K but 0 in Y
    Z = K & (~Y)
    return Z

# Example usage
Y = 10
K = 15
Z = find_min_z(Y, K)
print("Minimum Z:", Z)
*/