/* Given an array of size “N” ; find the minimum value of x such that 

a[1]&x + a[2]&x + a[3]&x + a[4]&x + …………………………+a[n]&x = maximum! 
*/


/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of elements

    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Compute the bitwise OR of all array elements.
    long long x = 0;
    for (int i = 0; i < n; i++) {
        x |= arr[i];
    }
    
    // The sum is computed as: sum (a[i] & x) over i.
    // But notice that for each element, a[i] & x equals a[i]
    // if a[i] only has bits that are also set in x.
    // Since x has all bits that appear in any a[i],
    // (a[i] & x) is simply a[i].
    // Thus, the maximum sum is just the sum of a[i].
    // However, the problem asks us just to find the x that maximizes
    // the expression, which is x = OR(all elements).
    
    cout << "Optimal x is: " << x << "\n";
    
    // Optionally, you can also compute the maximum sum:
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += (arr[i] & x);
    }
    cout << "Maximum Sum is: " << totalSum << "\n";
    
    return 0;
}
*/
//python///

/*def optimal_x(arr):
    x = 0
    for num in arr:
        x |= num
    return x

if __name__ == '__main__':
    # Input: space-separated integers on one line.
    arr = list(map(int, input("Enter array elements separated by space: ").split()))
    
    x = optimal_x(arr)
    print("Optimal x is:", x)
    
    # Optionally, compute the maximum sum of (a[i] & x)
    total_sum = sum(num & x for num in arr)
    print("Maximum Sum is:", total_sum)
*/