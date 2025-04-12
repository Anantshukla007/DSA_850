/*Understanding - Find the number of pairs (i,j) such that they follow this condition:- 

(i<j)

B[i] xor B[j] > B[i] And B[j] */



/*#include <iostream>
#include <vector>

using namespace std;

int leftmost_index_of_1(int num) {
    int index = 0;
    while (num) {
        index++;
        num >>= 1;
    }
    return index;
}

int main() {
    int n;
    cin >> n;

    vector<int> b(n + 1); // Assuming b is a vector of integers of size n+1

    // Input b values
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
    }

    vector<int> count_set_bits(32, 0); // Stores count of set bits at each position

    int count = 0;

    for (int j = 1; j <= n; ++j) {
        int id = leftmost_index_of_1(b[j]);
        count += count_set_bits[id]; // Increment count by the number of elements having a 1 at the same position
        count_set_bits[id]++; // Update count of set bits at the same position
    }
	int tot = (n*(n-1))/2;// Total Pairs Possible
	
    cout << tot - count << endl;//Subtracting Bad Pairs from Total Possible Pairs to obtain Good Pairs

    return 0;
}
*/


/*def leftmost_index_of_1(num):
    index = 0
    while num != 0:
        index += 1
        num >>= 1
    return 32 - index  # Adjust the index to count from left

n = int(input())
b = [int(x) for x in input().split()]

count_set_bits = [0] * 32
count = 0

for j in range(n):  # Iterate up to n
    id = leftmost_index_of_1(b[j])
    count += count_set_bits[id]
    count_set_bits[id] += 1

tot = (n * (n - 1)) // 2  # Total Pairs Possible
print(tot - count)  # Subtracting Bad Pairs from Total Possible Pairs to obtain Good Pairs
*/