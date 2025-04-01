/*You are given two arrays a and b -> both are of size “N”. 

Start your journey at index 1 and end your journey at index “N”. 

In a move you can move from a[i]->a[i+1] or a[i]->b[i+1] 

OR 

b[i]->b[i+1] or b[i]->a[i+1]

Output the number of journeys whose sum is even and odd. 

*/


/*#include <iostream>
#include <vector>

using namespace std;

void countJourneys(vector<int>& a, vector<int>& b) {
    int n = a.size();
    
    // Initialize dp array
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(2, 0)));
    
    // Base case
    
    
    
    if(b[1]%2==0){
      dp[1][1][0] = 1 ; 
      dp[1][1][1] = 0 ; 
    }
    else{
      dp[1][1][0] = 0 ; 
      dp[1][1][1] = 1 ; 
    }
    
    
    if(a[1]%2==0){
      dp[1][0][0] = 1 ; 
      dp[1][0][1] = 0 ; 
    }
    else{
      dp[1][0][0] = 0 ; 
      dp[1][0][1] = 1 ; 
    }
    
    
    
    // Dynamic programming
    for (int i = 2; i <= n; ++i) {
        // Update dp[i][a][even]
        if (a[i] % 2 == 0) {
            dp[i][0][0] = (dp[i - 1][0][0] + dp[i - 1][1][0])  ;
        } else {
            dp[i][0][0] = (dp[i - 1][0][1] + dp[i - 1][1][1])  ;
        }
        
        // Update dp[i][a][odd]
        if(a[i] % 2 == 0) {
            dp[i][0][1] = (dp[i - 1][0][1] + dp[i - 1][1][1])  ;
        } else {
            dp[i][0][1] = (dp[i - 1][0][0] + dp[i - 1][1][0])  ;
        }
        
        // Update dp[i][b][even]
        if (b[i] % 2 == 0) {
            dp[i][1][0] = (dp[i - 1][0][0] + dp[i - 1][1][0])  ;
        } else {
            dp[i][1][0] = (dp[i - 1][0][1] + dp[i - 1][1][1])  ;
        }
        
        // Update dp[i][b][odd]
        if (b[i] % 2 == 0) {
            dp[i][1][1] = (dp[i - 1][0][1] + dp[i - 1][1][1])  ;
        } else {
            dp[i][1][1] = (dp[i - 1][0][0] + dp[i - 1][1][0])  ;
        }
    }
    
    // Total even and odd journeys
    int evenJourneys = (dp[n][0][0] + dp[n][1][0])  ;
    int oddJourneys = (dp[n][0][1] + dp[n][1][1])  ;
    
    cout << "Even journey count is " << evenJourneys << endl;
    cout << "Odd journey count is " << oddJourneys << endl;
}

int main() {
    vector<int> a = {1, 2, 1};
    vector<int> b = {3, 1, 1};
    
    countJourneys(a, b);
    
    return 0;
}
*/



/*def count_journeys(a, b):
    n = len(a)
    
    # Initialize dp array using the given method
    rows = 2
    cols = 2
    depth = n + 1
    dp = [[[0] * cols for _ in range(rows)] for _ in range(depth)]
    
    # Base case
    if b[0] % 2 == 0:
        dp[1][1][0] = 1
        dp[1][1][1] = 0
    else:
        dp[1][1][0] = 0
        dp[1][1][1] = 1
    
    if a[0] % 2 == 0:
        dp[1][0][0] = 1
        dp[1][0][1] = 0
    else:
        dp[1][0][0] = 0
        dp[1][0][1] = 1
    
    # Dynamic programming
    for i in range(2, n + 1):
        # Update dp[i][a][even]
        if a[i - 1] % 2 == 0:
            dp[i][0][0] = dp[i - 1][0][0] + dp[i - 1][1][0]
        else:
            dp[i][0][0] = dp[i - 1][0][1] + dp[i - 1][1][1]
        
        # Update dp[i][a][odd]
        if a[i - 1] % 2 == 0:
            dp[i][0][1] = dp[i - 1][0][1] + dp[i - 1][1][1]
        else:
            dp[i][0][1] = dp[i - 1][0][0] + dp[i - 1][1][0]
        
        # Update dp[i][b][even]
        if b[i - 1] % 2 == 0:
            dp[i][1][0] = dp[i - 1][0][0] + dp[i - 1][1][0]
        else:
            dp[i][1][0] = dp[i - 1][0][1] + dp[i - 1][1][1]
        
        # Update dp[i][b][odd]
        if b[i - 1] % 2 == 0:
            dp[i][1][1] = dp[i - 1][0][1] + dp[i - 1][1][1]
        else:
            dp[i][1][1] = dp[i - 1][0][0] + dp[i - 1][1][0]
    
    # Total even and odd journeys
    even_journeys = dp[n][0][0] + dp[n][1][0]
    odd_journeys = dp[n][0][1] + dp[n][1][1]
    
    print("Even journey count is", even_journeys)
    print("Odd journey count is", odd_journeys)

# Example usage
a = [1, 2, 1]
b = [3, 1, 1]
count_journeys(a, b)
*/