/*You are given two 0-indexed integer permutations A and B of length n.

A prefix common array of A and B is an array C such that C[i] is equal to the count of numbers that are present at or before the index i in both A and B.

Return the prefix common array of A and B.

A sequence of n integers is called a permutation if it contains all integers from 1 to n exactly once.

 

Example 1:

Input: A = [1,3,2,4], B = [3,1,2,4]
Output: [0,2,3,4]
Explanation: At i = 0: no number is common, so C[0] = 0.
At i = 1: 1 and 3 are common in A and B, so C[1] = 2.
At i = 2: 1, 2, and 3 are common in A and B, so C[2] = 3.
At i = 3: 1, 2, 3, and 4 are common in A and B, so C[3] = 4.

Note: Please do not copy the description during the contest to maintain the integrity of your submissions.*/

/*#include <bits/stdc++.h>
using namespace std;

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    int n = A.size();
    unordered_set<int> seen;
    vector<int> C(n, 0);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (seen.count(A[i])) count++;
        if (seen.count(B[i])) count++;
        if (A[i] == B[i]) count++;

        seen.insert(A[i]);
        seen.insert(B[i]);
        C[i] = count;
    }
    return C;
}

int main() {
    vector<int> A = {1, 3, 2, 4};
    vector<int> B = {3, 1, 2, 4};

    vector<int> result = findThePrefixCommonArray(A, B);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
*/


/*Python*/

/*def findThePrefixCommonArray(A, B):
    n = len(A)
    seen = set()
    C = [0] * n
    count = 0

    for i in range(n):
        if A[i] in seen:
            count += 1
        if B[i] in seen:
            count += 1
        if A[i] == B[i]:  
            count += 1
        seen.add(A[i])
        seen.add(B[i])
        C[i] = count
    
    return C

# Example usage
A = [1, 3, 2, 4]
B = [3, 1, 2, 4]
print(findThePrefixCommonArray(A, B))  # Output: [0, 2, 3, 4]
*/