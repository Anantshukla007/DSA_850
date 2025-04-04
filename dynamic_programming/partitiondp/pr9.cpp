/*Find the number of partitions of an array such that each contiguous partition consists of at least one negative number.
eg. [-2,1,-3] has these possible partitions :
-> [-2,1][-3]
-> [-2][1 -3]
->[-2 1 -3] 
*/

/*#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
    }
    
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    
    for (int i = 1; i <= n; ++i) {
        int j = i;
        int c = 0;
        while (j >= 1) {
            if (b[j] < 0) {
                c++;
            }
            if (c >= 1) {
                dp[i] = dp[i] + dp[j - 1];
            }
            j--;
        }
    }
    
    cout << dp[n] << endl;
    return 0;
}
*/


/*def main():
    n = int(input())
    b = [0] * (n + 1)
    for i in range(1, n + 1):
        b[i] = int(input())
    
    dp = [0] * (n + 1)
    dp[0] = 1
    
    for i in range(1, n + 1):
        j = i
        c = 0
        while j >= 1:
            if b[j] < 0:
                c += 1
            if c >= 1:
                dp[i] += dp[j - 1]
            j -= 1
    
    print(dp[n])

if __name__ == "__main__":
    main()
*/