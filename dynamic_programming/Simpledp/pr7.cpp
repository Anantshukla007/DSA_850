/*Taro's summer vacation starts tomorrow, and he has decided to make plans for it now.

The vacation consists of 
N days. For each 
i (
1≤i≤N), Taro will choose one of the following activities and do it on the 
i-th day:

A: Swim in the sea. Gain 
a 
i
​
  points of happiness.
B: Catch bugs in the mountains. Gain 
b 
i
​
  points of happiness.
C: Do homework at home. Gain 
c 
i
​
  points of happiness.
As Taro gets bored easily, he cannot do the same activities for two or more consecutive days.

Find the maximum possible total points of happiness that Taro gains.*/


/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    vector<int> dpa(n), dpb(n), dpc(n);

    dpa[0] = a[0];
    dpb[0] = b[0];
    dpc[0] = c[0];

    for (int i = 1; i < n; i++) {
        dpa[i] = max(dpb[i - 1] + a[i], dpc[i - 1] + a[i]);
        dpb[i] = max(dpa[i - 1] + b[i], dpc[i - 1] + b[i]);
        dpc[i] = max(dpb[i - 1] + c[i], dpa[i - 1] + c[i]);
    }

    cout << max({dpa[n - 1], dpb[n - 1], dpc[n - 1]}) << endl;
    return 0;
}

*/




/*n = int(input())
a, b, c = [], [], []

for _ in range(n):
    x, y, z = map(int, input().split())
    a.append(x)
    b.append(y)
    c.append(z)

dpa, dpb, dpc = [0] * n, [0] * n, [0] * n

dpa[0], dpb[0], dpc[0] = a[0], b[0], c[0]

for i in range(1, n):
    dpa[i] = max(dpb[i - 1] + a[i], dpc[i - 1] + a[i])
    dpb[i] = max(dpa[i - 1] + b[i], dpc[i - 1] + b[i])
    dpc[i] = max(dpb[i - 1] + c[i], dpa[i - 1] + c[i])

print(max(dpa[-1], dpb[-1], dpc[-1]))
*/