/*. Sum of those elements is maximum(Sum of the subset is maximum) .

2. No two elements in the subset should be consecutive.

Example :- {2,4,6,7,8}

Answer:- {2+6+8=16}*/



/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 1) { // Handle case where only one element is present
        cout << arr[0] << endl;
        return 0;
    }

    vector<int> dp(n, 0);
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 2] + arr[i], dp[i - 1]);
    }

    cout << dp[n - 1] << endl; // Print the result
    return 0;
}
*/


//Python

