/*We are given an array of integers(a[n]) . We are given multiple queries of the form : (1, i) which means we need to output the sum of all numbers from index- ‘1’ to index ‘i’ of the array.*/



/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 5;
	int a[5] = {6,7,3,2,2};
	int i=0;
	
	int dp[n] ={0};
	while(i<=n-1){
		if(i==0){
			dp[i] = a[i];
		}
		else{
			dp[i] = a[i]+dp[i-1];
		}
		i++;
	}
	int q =4;
	int w[4] ={0,3,4,2};
	i=0;
	while(i<=q-1){
		int query;
		query = w[i];
		cout<<dp[query];
		cout<<endl;
		i++;
	}
	
	return 0;

}*/



///python///


/*n = 5
a = [6, 7, 3, 2, 2]
dp = [0] * n

# Compute prefix sum array
i = 0
while i < n:
    if i == 0:
        dp[i] = a[i]
    else:
        dp[i] = a[i] + dp[i - 1]
    i += 1  # Increment i

q = 4
w = [0, 3, 4, 2]

# Answer queries
i = 0
while i < q:
    query = w[i]
    print(dp[query])
    i += 1
*/