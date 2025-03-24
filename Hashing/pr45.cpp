/*There is a 2d array of size n x 2, requests. At time trequests[i][0], requests[i] [1] packets are to be sent over the network. The network can hold at most max packets packets in the pipeline. It delivers the data to the client at rate packets per second, le rate packets are removed from the queue and delivered to the client every second.
If the number of packets exceeds max packets at any time, the packets remaining at that time are dropped.
Given the array requests, and the integers, max packets, and rate, find the total number of packets that are dropped.
Example
Suppose requests [[1, 8], [4, 9], [6, 7]], rate-2, and max packets-10.*/

/*#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ; 

int main() {
    
    ll n ; 
    cin>>n ; 
    ll request[n][2];
    unordered_map <ll,ll> k ;
    ll max_t = 0 ; 
    ll i = 0 ; 
    while(i<=n-1){
        cin>>request[i][0]>>request[i][1];
        k[request[i][0]] = request[i][1];
        max_t = max(max_t,request[i][0]);
        i++;
    }
    ll rate;
    cin>>rate;
    ll max_packet;
    cin>>max_packet ;
    //cout<<rate<<"\n";
    
    //cout<<k[1]<<"\n";
    
    ll answer = 0 ; 
    
    ll current = 0 ; 
    i = 0 ; 
    while(i<=n-1){
        ll t = request[i][0]; 
        current = current + k[t];
        if(current>max_packet){
            ll drop = current - max_packet ;
            answer = answer + drop ; 
            current = max_packet; 
        }
            
        if(i<=n-2){
            ll next = request[i+1][0] ; 
            ll diff = next - t ; 
            current = current - (diff)*(rate);
        }
        
        if(current<0){
            current = 0 ; 
        }
        i++;
    }
    cout<<answer ;
    
    
    return 0 ;
}*/


/*n = int(input())
request = [[0, 0] for _ in range(n)]
k = {}
max_t = 0
i = 0

while i <= n - 1:
    request[i][0], request[i][1] = map(int, input().split())
    k[request[i][0]] = request[i][1]
    max_t = max(max_t, request[i][0])
    i += 1

rate = int(input())
max_packet = int(input())

answer = 0
current = 0
i = 0

while i <= n - 1:
    t = request[i][0]
    current += k[t]
    if current > max_packet:
        drop = current - max_packet
        answer += drop
        current = max_packet
    
    if i <= n - 2:
        next_t = request[i + 1][0]
        diff = next_t - t
        current -= diff * rate

    if current < 0:
        current = 0

    i += 1

print(answer)
*/