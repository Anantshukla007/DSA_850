/*-> Given an array of size ‘N’; find the number of ways to partition it such that the sum of each part is <=M ; but you should only make k partitions!

*/



/*#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll ; 
ll dp[105][105];
int main() {
    ll n ; 
    cin>>n ; 
    ll m ; 
    cin>>m ; 
    ll k ; 
    cin>>k;
    ll b[n+1] = {0};
 
    for(ll i=1;i<=n;i++){
        cin>>b[i];
    }
 
 
    for(ll i=0;i<=100;i++){
        for(ll j=0;j<=100;j++){
            dp[i][j] = -1e18;
        }
    }
 
    dp[0][0] = 1 ; 
    dp[1][1] = 1 ; 
 
    for(ll i=2;i<=n;i++){
 
        ll prt = 1 ; 
        while(prt<=k){
        ll v = 0 ; 
        ll j = i ; ll sum = b[i]; 
        while(j>=1 && sum<=m){
 
            ll g = dp[j-1][prt-1];
            //cout<<j-1<<" "<<prt-1<<" "<<dp[j-1][prt-1]<<"\n";
 
            if(g>0){
            v = v + g ; 
            }
            j--;
            sum = sum + b[j] ; 
        }
 
        if(v>0){
 
        dp[i][prt] = v ; 
        }
 
        cout<<i<<" "<<prt<<" "<<dp[i][prt]<<"\n";
 
 
        prt++;}
    }
 
    cout<<dp[n][k];
 
 
    return 0;
}*/
/*n = int(input())
m = int(input())
k = int(input())

b = [0] + list(map(int, input().split()))

dp = [[-1e18] * 105 for _ in range(105)]

dp[0][0] = 1
dp[1][1] = 1

for i in range(2, n + 1):
    prt = 1
    while prt <= k:
        v = 0
        j = i
        _sum = b[i]
        while j >= 1 and _sum <= m:
            g = dp[j - 1][prt - 1]

            if g > 0:
                v += g

            j -= 1
            _sum += b[j]

        if v > 0:
            dp[i][prt] = v

        print(i, prt, dp[i][prt])

        prt += 1

print(dp[n][k])
*/