/*Understanding : Given array “A” of size “N”; find the number of pairs in the array (i,j) such that a[i] + a[j] is divisible by k 

1<=k<=2000000000
1<=a[i]<=1000000000
1<=n<=100000

-> [5 2 3 1 1] 
*/


/*#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll; 
 
int main() {
 
    ll n ; 
    cin>>n;
    ll k;
    cin>>k;
    unordered_map <ll,ll> mp;
    ll sum = 0 ; 
    for(ll i=1;i<=n;i++){
        ll yy;
        cin>>yy;
 
        ll g = k - (yy%k) ;
        g = g%k ; 
        sum = sum + mp[g] ;
        mp[yy%k]=mp[yy%k]+1;
    }
    cout<<sum;
 
 
    return 0;
}*/


/*python*/


/*n = int(input())
k = int(input())
mp = {}
sum = 0
 
for i in range(1, n+1):
    yy = int(input())
    g = k - (yy % k)
    g = (g % k)
    sum += mp.get(g, 0)
    mp[yy % k] = mp.get(yy % k, 0) + 1
 
print(sum)*/