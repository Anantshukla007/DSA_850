/*-> Given an array of size “N” ; find the maximum sum subarray which has the same elements in the start and end. 

Example :- 

[1 8 10 8 -5 8] 

Output :-> 29.
*/



/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(vector<ll>& arr) {
    unordered_map<ll, ll> mp; // maps each value v to the minimum prefix sum before its occurrence
    ll su = 0;               // running prefix sum
    ll ans = -LLONG_MAX;     // initialize answer to a very small number
    
    for (ll x : arr) {
        ll old = su;       // prefix sum before adding current element
        su += x;           // update prefix sum
        if (mp.find(x) != mp.end()) {
            ans = max(ans, su - mp[x]);
            mp[x] = min(mp[x], old);
        } else {
            mp[x] = old;
        }
    }
    return (ans == -LLONG_MAX ? 0 : ans);
}

int main(){
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << solve(arr) << endl;
    return 0;
}
*/

/*pyython*/


/*def solve(arr):
    # mp maps each value v to the minimum prefix sum encountered before v's occurrence.
    mp = {}
    su = 0       # running prefix sum (P)
    ans = -float('inf')
    
    for x in arr:
        old = su  # prefix sum before adding current element
        su += x   # update prefix sum (now P[i])
        if x in mp:
            # Candidate: current prefix sum minus the minimum prefix sum before a previous occurrence of x.
            ans = max(ans, su - mp[x])
            mp[x] = min(mp[x], old)
        else:
            mp[x] = old  # record prefix sum before first occurrence of x
    return ans if ans != -float('inf') else 0

# Input handling
n = int(input())
arr = list(map(int, input().split()))
print(solve(arr))
*/