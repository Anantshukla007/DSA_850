/*Given an array of distinct positive integers and a number x, find the number of pairs of integers in the array whose XOR is equal to x. 

Examples: 

Input : arr[] = {5, 4, 10, 15, 7, 6}, x = 5
Output : 1
Explanation :  (10 ^ 15) = 5

Input : arr[] = {3, 6, 8, 10, 15, 50}, x = 5
Output : 2
Explanation : (3 ^ 6) = 5 and (10 ^ 15) = 5 */



/*#include <iostream>
#include <unordered_set>
using namespace std;

int countXORPairs(int arr[], int n, int x) {
    unordered_set<int> seen;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int target = arr[i] ^ x;
        if (seen.find(target) != seen.end()) {
            count++;
        }
        seen.insert(arr[i]);
    }

    return count;
}

int main() {
    int arr[] = {3, 6, 8, 10, 15, 50};
    int x = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Count of pairs with XOR " << x << " is: " << countXORPairs(arr, n, x) << endl;
    return 0;
}
*/


//python//

/*def count_xor_pairs(arr, x):
    seen = set()
    count = 0

    for num in arr:
        target = num ^ x
        if target in seen:
            count += 1
        seen.add(num)

    return count

# Example usage
arr = [3, 6, 8, 10, 15, 50]
x = 5
print("Count of pairs with XOR", x, "is:", count_xor_pairs(arr, x))
*/