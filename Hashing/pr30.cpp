/*Understanding :-> We are given an array of size “N”; find the number of subarrays which are.-> have the same element at start as well as end ; and the sum of that subarray(excluding the first and last number) = first number = last number 

1<=N<=300000
1<=c[i]<=1000000000.

*/



/*#include <bits/stdc++.h>

using namespace std;
typedef long long int ll ; 

int main() {
    ll n;
    cin>>n;
    map<pair<ll,ll>,ll> k;
    ll count = 0 ; 
    ll i = 1 ;
    ll sum = 0 ;
    while(i<=n){
        ll number;
        cin>>number;
        sum = sum + number ;
        
        
        
        ll focus_sum = sum - number ; 
        ll g = focus_sum - number;
        count = count + k[{number,g}];
        
        
        k[{number,sum}]++;
        
        i++;
    }
    
    cout<<count;
    
    
    
    
    return 0;
}*/


/*python*/


/*n = int(input())
k = {}  # using a normal dictionary instead of OrderedDict
count = 0
i = 1
sum_ = 0

while i <= n:
    number = int(input())
    sum_ += number

    focus_sum = sum_ - number
    g = focus_sum - number
    count += k.get((number, g), 0)

    k[(number, sum_)] = k.get((number, sum_), 0) + 1
    i += 1

print(count)
*/