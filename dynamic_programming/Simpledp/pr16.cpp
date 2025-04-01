/*Find the number of ways to make sum “y” with the numbers “1”,”2”,”4”,”6”. 

Condition :- 4 can be used at most 2 times. 
*/


/*n = int(input())

# Handle edge cases where n is very small
if n == 0:
    print(3)  # dp[0][0] + dp[0][1] + dp[0][2] = 1 + 1 + 1
    exit()

# Initialize the dp array with size (n+1) x 3
dp = [[0 for _ in range(3)] for _ in range(n+1)]

# Base cases
dp[0][0] = 1

for i in range(1, n+1):
    if i-1 >= 0:
        dp[i][0] += dp[i-1][0]
    if i-2 >= 0:
        dp[i][0] += dp[i-2][0]
    if i-6 >= 0:
        dp[i][0] += dp[i-6][0]
        
    if i-1 >= 0:
        dp[i][1] += dp[i-1][1]
    if i-2 >= 0:
        dp[i][1] += dp[i-2][1]
    if i-4 >= 0:
        dp[i][1] += dp[i-4][0]
    if i-6 >= 0:
        dp[i][1] += dp[i-6][1]
        
    if i-1 >= 0:
        dp[i][2] += dp[i-1][2]
    if i-2 >= 0:
        dp[i][2] += dp[i-2][2]
    if i-4 >= 0:
        dp[i][2] += dp[i-4][1]
    if i-6 >= 0:
        dp[i][2] += dp[i-6][2]

# The final answer
result = dp[n][0] + dp[n][1] + dp[n][2]
print(result)*/


///python////

/*n = int(input())

# Handle edge cases where n is very small
if n == 0:
    print(3)  # dp[0][0] + dp[0][1] + dp[0][2] = 1 + 1 + 1
    exit()

# Initialize the dp array with size (n+1) x 3
dp = [[0 for _ in range(3)] for _ in range(n+1)]

# Base cases
dp[0][0] = 1

for i in range(1, n+1):
    if i-1 >= 0:
        dp[i][0] += dp[i-1][0]
    if i-2 >= 0:
        dp[i][0] += dp[i-2][0]
    if i-6 >= 0:
        dp[i][0] += dp[i-6][0]
        
    if i-1 >= 0:
        dp[i][1] += dp[i-1][1]
    if i-2 >= 0:
        dp[i][1] += dp[i-2][1]
    if i-4 >= 0:
        dp[i][1] += dp[i-4][0]
    if i-6 >= 0:
        dp[i][1] += dp[i-6][1]
        
    if i-1 >= 0:
        dp[i][2] += dp[i-1][2]
    if i-2 >= 0:
        dp[i][2] += dp[i-2][2]
    if i-4 >= 0:
        dp[i][2] += dp[i-4][1]
    if i-6 >= 0:
        dp[i][2] += dp[i-6][2]

# The final answer
result = dp[n][0] + dp[n][1] + dp[n][2]
print(result)*/