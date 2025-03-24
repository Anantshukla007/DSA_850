
/*#include <bits/stdc++.h>

using namespace std;
typedef long long int ll ; 
ll sol(ll v){
    ll sum = 0 ; 
    while(v!=0){
        sum = sum + v%10 ; 
        v = v/10 ; 
    }
    return sum ; 
}


int main() {
    
    int n ; 
    cin>>n ; 
    ll b[n+1] = {0}; 
    
    ll i = 1 ; 
    while(i<=n){
        cin>>b[i] ;
        
        i++;
    }
    unordered_map <ll,ll> kk ; 
    i = 1 ; ll answer = -1 ; 
    while(i<=n){
        if(kk.find(sol(b[i]))!=kk.end()){
            ll pp = b[i] + kk[sol(b[i])];
            answer = max(answer,pp);
            kk[sol(b[i])] = max(kk[sol(b[i])],b[i]) ; 
        }
        else{
            kk[sol(b[i])] = b[i]; 
        }
        i++;
    }
    
    cout<<answer ; 

    return 0 ; 
}*/
/*ptyhon*/

/*def solve(n):
	s =0
	while n > 0:
		s += n%10
		n = n//10
	return s
def solution(arr):
	mp = {}
	ans = 0
	
	for i in arr:
		num = i
		x = solve(num)
		if x in mp:
			ans = max(ans, mp[x]+num)
			mp[x] = max(mp[x],num)
		if x not in mp:
			mp[x] = num
	return ans 
n = int(input())

arr = list(map(int,input().split()))
print(solution(arr))
			*/