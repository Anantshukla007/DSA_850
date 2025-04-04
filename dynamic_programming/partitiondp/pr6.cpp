/*Understanding :-> Given a string s(only consists of “a” and “b”) ; find the largest substring such that there are at max only 2 continuous occurrences of “a” and “b” 

-> “aabbaaa” -> Whole string is not valid ; but part of the string->substring -> “aabbaa” -> this is valid -> length is 6.


They are saying whenever “a” comes; in continuous fashion it should only come for maximum 2 times ; similarly when “b” comes; in continuous fashion it should only come for maximum 2 times.
*/


/*#include <bits/stdc++.h>
using namespace std ; 
typedef long long int ll ; 
ll my(ll x,ll y,ll z,ll w){
    return max(x,max(y,max(z,w)));
}


int main(){
    string s ; 
    cin>>s ; 
    ll n = s.size();
    ll dpa1[n]={0};
    ll dpa2[n]={0};
    ll dpb1[n]={0};
    ll dpb2[n]={0};
    
    
    if(s[0]=='a'){
        dpa1[1] = 1 ; 
    }
    
    if(s[0]=='b'){
        dpb1[1] = 1 ; 
    }
    
    ll r = 0 ; 
    ll i = 1 ; ll answer = 1 ; 
    while(i<=n-1){
        
        if(s[i]=='a'){
            dpa1[i] = 1 + max(dpb1[i-1],dpb2[i-1]);
            
            if(i>=2 && s[i-1]=='a'){
                dpa2[i] = 2 + max(dpb1[i-2],dpb2[i-2]);
            }
            else if(s[i-1]=='a'){
                dpa2[i] = 2 ; 
            }
            dpb1[i] = 0 ; 
            dpb2[i] = 0 ; 
        }
        else {
            
            dpb1[i] = 1 + max(dpa1[i-1],dpa2[i-1]);
            
            if(i>=2 && s[i-1]=='b'){
                dpb2[i] = 2 + max(dpa1[i-2],dpa2[i-2]);
            }
            else if(s[i-1]=='b'){
                dpb2[i] = 2 ; 
            }
            dpa1[i] = 0 ; 
            dpa2[i] = 0 ; 
            
            
        }
        
        //cout<<dpa1[i]<<" "<<dpa2[i]<<" "<<dpb1[i]<<" "<<dpb2[i];
        //cout<<'\n';
        answer = my(dpa1[i],dpa2[i],dpb1[i],dpb2[i]);
        r = max(r,answer);
        i++;
    }
    cout<<r ; 
    
    
    
    
    return  0 ; 
}*/


/*def my(x, y, z, w):
    return max(x, max(y, max(z, w)))


def main():
    s = input()
    n = len(s)
    dpa1 = [0] * n
    dpa2 = [0] * n
    dpb1 = [0] * n
    dpb2 = [0] * n

    if s[0] == 'a':
        dpa1[1] = 1

    if s[0] == 'b':
        dpb1[1] = 1

    r = 0
    i = 1
    answer = 1
    while i <= n - 1:
        if s[i] == 'a':
            dpa1[i] = 1 + max(dpb1[i - 1], dpb2[i - 1])

            if i >= 2 and s[i - 1] == 'a':
                dpa2[i] = 2 + max(dpb1[i - 2], dpb2[i - 2])
            elif s[i - 1] == 'a':
                dpa2[i] = 2
            dpb1[i] = 0
            dpb2[i] = 0
        else:
            dpb1[i] = 1 + max(dpa1[i - 1], dpa2[i - 1])

            if i >= 2 and s[i - 1] == 'b':
                dpb2[i] = 2 + max(dpa1[i - 2], dpa2[i - 2])
            elif s[i - 1] == 'b':
                dpb2[i] = 2
            dpa1[i] = 0
            dpa2[i] = 0

        # print(dpa1[i], dpa2[i], dpb1[i], dpb2[i])
        # print()
        answer = my(dpa1[i], dpa2[i], dpb1[i], dpb2[i])
        r = max(r, answer)
        i += 1
    print(r)


if __name__ == "__main__":
    main()
*/