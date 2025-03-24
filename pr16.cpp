/*ou are given an array of size “N”; all elements are 0 in it :) 
You are given Q queries :-> [L,R] ; you have to add +1 to all the elements from [L,R] 

-> After all queries are performed you have to print the final answer 

N = 8 
Q = {
1,8
5,8
}

[0 0 0 0 0 0 0 0]

-> [1 1 1 1 1 1 1 1]

-> [1 1 1 1 2 2 2 2]
*/


/*#include <iostream>

using namespace std;

int main() {
    int n, Q, p;
    cin >> n >> Q >> p;

    int b[100001] = {0}; // Assuming l, r <= 100000

    for (int i = 1; i <= Q; i++) {
        int L, R;
        cin >> L >> R;
        b[L] = b[L] + 1;

        if (R + 1 <= n) {
            b[R + 1] = b[R + 1] - 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        b[i] = b[i] + b[i - 1];
    }

    for (int i = 1; i <= p; i++) {
        int y;
        cin >> y;
        cout << b[y] << endl;
    }

    return 0;
}
*/


/*pyhon*/


/*n, Q, p = map(int, input().split())

b = [0] * 100001  # Assuming l, r <= 100000

for _ in range(Q):
    L, R = map(int, input().split())
    b[L] += 1

    if R + 1 <= n:
        b[R + 1] -= 1

for i in range(1, n + 1):
    b[i] += b[i - 1]

for _ in range(p):
    y = int(input())
    print(b[y])
*/