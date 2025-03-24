/*You are given an array A of N integers. You have to find the number of special pairs in array A. A pair of two indexes i and jare called special if the following 2 conditions are
3
satisfied:
• A[A[A[i]]] =A[A[A[j]]]
Find out the number of special pairs present in array A
Note: 1-based Indexing is used.*/


/*#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ; 

int main() {
	int n;
	cin>>n ; 
	int a[n+1];
	int i = 1 ; 
	while(i<=n){
		cin>>a[i];
		i++;
	}
	unordered_map <ll,ll> kk ; 
	int count = 0 ; 
	i = 1 ; 
	while(i<=n){
		   //assuming now you are at index j
		   int RHS = a[a[a[i]]]; 
		   int g = kk[RHS]; //---> it tells how many 
		   //times RHS has come from 1 to i-1
		   count = count + g;
		   int LHS = a[a[a[i]]]; 
		   kk[LHS] = kk[LHS] + 1 ;//storing the elment in the map 
		   // maintaining its frequency
		   i++;
	}
	
	
	
	
	cout<<count ; 
	
	return 0;
}*/


/****python****/


/*n = int(input())
a = [0] * (n + 1)

i = 1
while i <= n:
    a[i] = int(input())
    i += 1

kk = {}
count = 0
i = 1

while i <= n:
    RHS = a[a[a[i]]]
    g = kk.get(RHS, 0)
    count += g

    LHS = a[a[a[i]]]
    kk[LHS] = kk.get(LHS, 0) + 1

    i += 1

print(count)
*/