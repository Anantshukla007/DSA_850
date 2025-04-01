/*Stephen is doing an internship in a company for N days. Each day, he may choose either an easy task or a difficult task. He may also choose to perform no task at all. He chooses a difficult task on days when and only when he did not perform any work the previous day. The amount paid by the company for both the easy and difficult tasks can vary each day, but the company always pays more for difficult tasks.
Write an algorithm to help Stephen earn the maximum salary.
Input
The first line of the input consists of two space-separated integers - num and type, representing the number of days of the internship (N) and types of tasks available for each day (type (M) is always equal to 2), respectively.
The next N lines consist of M space-separated integers - easy and hard, representing the amount set to be paid for the easy task and the difficult task on that day, respectively.*/


/*#include <bits/stdc++.h>

using namespace std;
typedef long long int ll ; 
ll dp[200005][5];
int main() {
    
    ll n ; 
    cin>>n ;
    ll v ; 
    cin>>v ; 
    
    ll easy[n+1] = {0};
    ll hard[n+1] = {0};
    
    
    ll i = 1 ; 
    while(i<=n){
        
        cin>>easy[i];
        cin>>hard[i];
        i++;
    }
    
    dp[1][1] = easy[1] ; //dp[][1]====easy 
    dp[1][2] = hard[1] ; //dp[][2]=====hrd
    dp[1][3] = 0 ; 
    
    i = 2 ; 
    while(i<=n){
        
        dp[i][1] = easy[i] + max(dp[i-1][1],max(dp[i-1][2],dp[i-1][3]));
        dp[i][2] = hard[i] + dp[i-1][3] ; //did nothing on i-1 dy
        dp[i][3] = 0 + max(dp[i-1][1],max(dp[i-1][2],dp[i-1][3]));
        
        
        i++;
    }
    
    cout<<max(dp[n][1],max(dp[n][2],dp[n][3]));
    
    
    return 0 ; 
}*/



/*def max_of_2_array(n, easy, hard):
    dp = [[0] * 4 for _ in range(n + 1)]
    
    # Base cases
    dp[1][1] = easy[1]  # Choosing from `easy`
    dp[1][2] = hard[1]  # Choosing from `hard`
    dp[1][3] = 0        # Doing nothing on the first day

    for i in range(2, n + 1):
        dp[i][1] = easy[i] + max(dp[i - 1][1], dp[i - 1][2], dp[i - 1][3])
        dp[i][2] = hard[i] + dp[i - 1][3]  # Did nothing on (i-1)th day
        dp[i][3] = max(dp[i - 1][1], dp[i - 1][2], dp[i - 1][3])  # Skipping today
    
    return max(dp[n][1], dp[n][2], dp[n][3])


# Input
n = int(input())
v = int(input())  # Not used in the logic

easy = [0] * (n + 1)
hard = [0] * (n + 1)

for i in range(1, n + 1):
    easy[i], hard[i] = map(int, input().split())

# Output the result
print(max_of_2_array(n, easy, hard))
*/