/*Problem.-> Given an array of size “N”; find the number of triplets; such that A[i] >A[j]< A[k] such that i < j < k ; 

1<=N<=1000
*/

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int b[n + 1];
    int pref[n + 1] = {0};
    int suf[n + 1] = {0};
    pref[1] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }

    int j = 2;
    while (j <= n) {
        int c = 0;
        int i = 1;
        while (i <= j - 1) {
            if (b[i] > b[j]) {
                c++;
            }
            i++;
        }
        pref[j] = c;
        j++;
    }

    suf[n] = 0;

    j = n - 1;
    while (j >= 1) {
        int c = 0;
        int k = j + 1;
        while (k <= n) {
            if (b[j] < b[k]) {
                c++;
            }
            k++;
        }
        suf[j] = c;
        j--;
    }

    int c = 0;
    j = 1;
    while (j <= n) {
        c = c + pref[j] * suf[j];
        j++;
    }

    cout << c << endl;

    return 0;
}
*/


/*python*/


/*def solve(arr):
    n = len(arr)
    prefix = [0] * n
    suffix = [0] * n

    # Compute prefix
    for i in range(1, n):
        count = 0
        for j in range(i):
            if arr[j] > arr[i]:
                count += 1
        prefix[i] = count

    # Compute suffix
    for i in range(n - 2, -1, -1):
        count = 0
        for j in range(i + 1, n):
            if arr[i] < arr[j]:
                count += 1
        suffix[i] = count

    # Compute result
    ans = sum(prefix[i] * suffix[i] for i in range(n))
    return ans

# Read input
n = int(input())
arr = list(map(int, input().split()))

print(solve(arr))
*/