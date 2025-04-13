/*Find the number of subarrays such that their maximum is K - 

[8 2 1 3 4 5 1 10] 

K = 3

Output = 3. [3],[1 3],[2 1 3] */


/*#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    // Example array and target K
    vector<int> arr = {8, 2, 1, 3, 4, 5, 1, 10};
    int K = 3;
    int n = arr.size();

    // Arrays to store "left" and "right" distances.
    // left[i]: number of contiguous elements to the left of i 
    //          that are allowed (stop only when an element > arr[i] is found).
    // right[i]: number of contiguous elements to the right of i 
    //           that are allowed (stop when an element >= arr[i] is found).
    vector<int> left(n, 0), right(n, 0);
    stack<int> st;

    // Compute left distances.
    // For each index, we pop until we find an element > arr[i].
    // If the stack is empty, it means all elements to the left are okay.
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] <= arr[i])
            st.pop();
        if (st.empty())
            left[i] = i; // from index 0 to i-1
        else
            left[i] = i - st.top() - 1;
        st.push(i);
    }
    // Clear the stack for right computation.
    while (!st.empty()) st.pop();

    // Compute right distances.
    // Notice we stop while the next element is strictly less than arr[i].
    // (When encountering an element equal to or greater than arr[i], we break.)
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] < arr[i])
            st.pop();
        if (st.empty())
            right[i] = n - i - 1;
        else
            right[i] = st.top() - i - 1;
        st.push(i);
    }

    // Sum subarrays for every occurrence of K.
    // For an index with arr[i] == K the number of valid subarrays is:
    // (left[i] + 1) * (right[i] + 1)
    long long totalSubarrays = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == K) {
            totalSubarrays += (long long)(left[i] + 1) * (right[i] + 1);
        }
    }
    
    cout << "Total subarrays with max = " << K << " (with the last K at that position): " 
         << totalSubarrays << endl;
    return 0;
}
*/



/*def count_subarrays_with_max_K(arr, K):
    n = len(arr)
    left = [0] * n
    right = [0] * n
    
    stack = []
    # Left pass: count how many contiguous indices on left can be used.
    # Stop only when an element > arr[i] is encountered.
    for i in range(n):
        while stack and arr[stack[-1]] <= arr[i]:
            stack.pop()
        if stack:
            left[i] = i - stack[-1] - 1
        else:
            left[i] = i
        stack.append(i)
    
    # Clear the stack for the right pass.
    stack.clear()
    
    # Right pass: move from right to left.
    # Stop when an element >= arr[i] is found.
    for i in range(n - 1, -1, -1):
        while stack and arr[stack[-1]] < arr[i]:
            stack.pop()
        if stack:
            right[i] = stack[-1] - i - 1
        else:
            right[i] = n - i - 1
        stack.append(i)
    
    total = 0
    for i in range(n):
        if arr[i] == K:
            # Number of valid subarrays where this K is the rightmost K.
            total += (left[i] + 1) * (right[i] + 1)
    return total

# Example usage:
arr = [8, 2, 1, 3, 4, 5, 1, 10]
K = 3
result = count_subarrays_with_max_K(arr, K)
print("Total subarrays with max =", K, ":", result)
*/