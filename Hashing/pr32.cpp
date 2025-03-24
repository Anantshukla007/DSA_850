/*Understanding :-> Given an array of size “N”; find a subset from an array with a particular property and the sum of that subset should be maximum possible. 

-> all adjacent elements should follow this.-> 

(s[1],s[2],...........s[m]) -> s[2] - s[1] = position[2] - position[1] 
S[3]-s[2] = position[3] - position[2].
*/


/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Group by diff = arr[i] - i
    unordered_map<ll, ll> groupSum;
    for (int i = 0; i < n; i++){
        ll diff = arr[i] - i;
        groupSum[diff] += arr[i];
    }
    
    ll ans = 0;
    for (auto &p : groupSum){
        ans = max(ans, p.second);
    }
    
    cout << ans << "\n";
    return 0;
}
*/


/*n = int(input())
arr = list(map(int, input().split()))

group_sum = {}
for i, val in enumerate(arr):
    diff = val - i
    group_sum[diff] = group_sum.get(diff, 0) + val

ans = max(group_sum.values())
print(ans)
*/