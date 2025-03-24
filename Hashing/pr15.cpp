/*Find cnt of string t in string s until we are getting string t in string s; if any char of t doesn’t present in s at any moment then we will break & return the cnt; & if string s is empty at any moment then again we will break from the loop & return the cnt. 


Better Approach :- 
Cases :- 
  S = abcbacbbac  t = abc  → unique

 S = abcbacbbac  t = abbc → duplicate

S = abcbacbbac  t = abcp 
*/


/*#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin>>s>>t;
	
	unordered_map<char,int>mp1,mp2;
	
	for(auto x:s)mp1[x]++;
	for(auto x:t)mp2[x]++;
	
	int cnt = 1e9;
	
	for(auto x:t){
		if(mp1.find(x) == mp1.end()){
			return 0;
		}
		else{
			cnt  = min(ans , mp1[x]/mp2[x]);
		}
	}
	cout<<cnt<<endl;
	return 0;
}*/


/*python*/

/*def maxCopies(s: str, t: str) -> int:
    from collections import defaultdict
    
    mp1 = defaultdict(int)
    mp2 = defaultdict(int)
    
    # Count frequency of characters in s and t
    for ch in s:
        mp1[ch] += 1
    for ch in t:
        mp2[ch] += 1
    
    # Initialize `cnt` to a very large value
    cnt = float('inf')
    
    # Check if all characters of t are in s and compute min ratio
    for ch in t:
        if ch not in mp1:
            return 0
        cnt = min(cnt, mp1[ch] // mp2[ch])
    
    return cnt

# Taking input
s = input().strip()
t = input().strip()
print(maxCopies(s, t))
*/