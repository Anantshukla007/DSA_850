/*Understanding :-> You are given an array of size “N”; try to find the maximum number of pairs whose sum is “K”; but “K” is unknown. Fix such a K ; that the number of pairs comes as maximum! 
*/


/*#include <bits/stdc++.h>

using namespace std;
typedef long long int ll ; 

int maxOperations(vector<int>& nums, int k) {
    unordered_map <int,int> kk,gg; 
    int i = 0 ; 
    int n = nums.size();
    while(i<n){
        kk[nums[i]]=kk[nums[i]]+1;
        i=i+1;
    }
    int answer = 0 ; 
    for(i=0;i<n;i++){
        int number = nums[i] ; 
        int partner = k - number ; 
        if(gg[number]==0 && gg[partner]==0){
            if(number==partner){
                int yy = kk[number];
                answer = answer + (yy/2);
            }
            else{
                answer = answer + min(kk[number],kk[partner]);
            }
        }
        gg[number]=1;
        gg[partner]=1;
    }
    return answer ; 
}
    
int main() {
    
    ll n ; 
    cin>>n ; 
    vector <int> nums;
    ll i = 0 ; 
    while(i<n){
        ll yy;cin>>yy;
        nums.push_back(yy);
        i++;
    }
    
    i = 0 ; int answer = 0 ; 
    while(i<n){
        ll j = 0 ; 
        while(j<n){
            ll k = nums[i] + nums[j];
            int bb = maxOperations(nums,k);
            answer = max(answer,bb);
            j=j+1;
        }
        i=i+1;
    }
    cout<<answer; 
    
    return 0 ; 
}*/


/*from typing import List

def max_operations(nums: List[int], k: int) -> int:
    kk = {}
    gg = {}
    
    i = 0
    n = len(nums)
    while i < n:
        kk[nums[i]] = kk.get(nums[i], 0) + 1
        i = i + 1
    
    answer = 0
    for i in range(n):
        number = nums[i]
        partner = k - number
        
        if gg.get(number, 0) == 0 and gg.get(partner, 0) == 0:
            if number == partner:
                yy = kk[number]
                answer = answer + (yy // 2)
            else:
                answer = answer + min(kk.get(number, 0), kk.get(partner, 0))
        
        gg[number] = 1
        gg[partner] = 1
    
    return answer


n = int(input())
nums = []
for _ in range(n):
    yy = int(input())
    nums.append(yy)

answer = 0
for i in range(n):
    for j in range(n):
        k = nums[i] + nums[j]
        bb = max_operations(nums, k)
        answer = max(answer, bb)

print(answer)
*/