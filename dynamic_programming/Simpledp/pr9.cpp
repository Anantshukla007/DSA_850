/*Given an integer “N” ; find the minimum cost to reduce it to 1
The operations you can do are as follows.->

i) Reduce the number by 1 in “y” dollars; 

ii) Reduce the number by /7 in “x” dollars.(if number is divisible by 7)

iii) Reduce the number by /3 in “z” dollars;(if number is divisible by 3)

iv) Reduce the number by /5 in “b” dollars;(if number is divisible by 5) 

(1<=n<=100000)


Understanding :->

N = 15 

Y = 100 
X = 1 
Z = 500 
B = 10000000
*/

/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int y, x, z, b;
    cin >> y >> x >> z >> b;

    vector<int> dp(n + 1, INT_MAX);
    dp[1] = 0;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + y; // Reduce by 1

        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + z); // Reduce by /3
        }
        if (i % 5 == 0) {
            dp[i] = min(dp[i], dp[i / 5] + b); // Reduce by /5
        }
        if (i % 7 == 0) {
            dp[i] = min(dp[i], dp[i / 7] + x); // Reduce by /7
        }
    }

    cout << dp[n] << endl;
    return 0;
}
*/


/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int y, x, z, b;
    cin >> y >> x >> z >> b;

    vector<int> dp(n + 1, INT_MAX);
    dp[1] = 0;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + y; // Reduce by 1

        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + z); // Reduce by /3
        }
        if (i % 5 == 0) {
            dp[i] = min(dp[i], dp[i / 5] + b); // Reduce by /5
        }
        if (i % 7 == 0) {
            dp[i] = min(dp[i], dp[i / 7] + x); // Reduce by /7
        }
    }

    cout << dp[n] << endl;
    return 0;
}
*/