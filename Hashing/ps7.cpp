/*You are given the following:
• Integers n, c, d
• Array a as a1, a2,..., An of length n
• Array bas b1, b2,..., bn of length n
Task
Determine the number of pairs i, j (1 ≤ i ≤ j ≤n), satisfying the inequality < (ai - aj + c) ≤ (bi - bj + d)*/


/*#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n,c,d ; 
    cin>>n>>c>>d ; //reading n,c,d 
    
    int a[n+1] ; //1 based indexing
    int b[n+1] ; 
    
    
    
    int i = 1 ; 
    while(i<=n){
        cin>>a[i];
        i++;
    }
    
    i = 1 ; 
    while(i<=n){
        cin>>b[i];
        i++;
    }
    
    unordered_map <int,int> kk ; 
    i = 1 ; int counter = 0 ; 
    while(i<=n){
        int g = a[i] - b[i] ; 
        
        int current = g + (d-c);
        
        counter = counter + kk[current] ; 
        
        kk[g] = kk[g] + 1 ; 
        
        i++;
    }
    
    cout<<counter ; 
    
    
    
    
    
    return 0 ;
}*/


/*import sys

def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    c = int(data[1])
    d = int(data[2])
    
    # Read arrays a and b (using 0-indexing)
    a = [int(x) for x in data[3:3+n]]
    b = [int(x) for x in data[3+n:3+2*n]]
    
    kk = {}  # dictionary to mimic unordered_map<int,int>
    counter = 0
    K = d - c
    
    # Loop through the indices similar to 1-indexed loop in C++
    for i in range(n):
        g = a[i] - b[i]
        current = g + K
        # If the key "current" exists in kk, add its value to the counter
        counter += kk.get(current, 0)
        # Increment the count for key g
        kk[g] = kk.get(g, 0) + 1
        
    print(counter)

if __name__ == "__main__":
    main()
*/