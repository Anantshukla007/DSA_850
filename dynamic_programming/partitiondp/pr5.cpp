/*You are given a string s consisting of digits. You need to count the number of ways to partition s into one or more substrings such that each substring (without any leading zero) represents a prime number. To keep the checks efficient, note that only substrings of a limited length (e.g. at most 7 digits) need to be considered so that the resulting number remains within a manageable range.

Key Points:

A valid substring must not have a leading zero.

Each valid substring, when converted to an integer, must be a prime.


Count the total number of ways to partition the string into valid substrings.*/


/*#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to count prime partitions using tabulation
int countPrimePartitions(string s) {
    int n = s.size();
    vector<int> dp(n + 1, 0);
    dp[0] = 1; // Base case: one way to partition an empty string

    for (int i = 1; i <= n; i++) {
        for (int len = 1; len <= 7 && i - len >= 0; len++) {
            string sub = s.substr(i - len, len);
            if (sub[0] == '0') continue; // Ignore substrings with leading zero
            int num = stoi(sub);
            if (isPrime(num)) {
                dp[i] += dp[i - len];
            }
        }
    }

    return dp[n];
}

int main() {
    string s;
    cin >> s;
    cout << countPrimePartitions(s) << endl;
    return 0;
}
*/


/*def is_prime(num):
    if num < 2:
        return False
    if num in (2, 3):
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False
    for i in range(5, int(num ** 0.5) + 1, 6):
        if num % i == 0 or num % (i + 2) == 0:
            return False
    return True

def count_prime_partitions(s):
    n = len(s)
    dp = [0] * (n + 1)
    dp[0] = 1  # Base case: one way to partition an empty string

    for i in range(1, n + 1):
        for length in range(1, 8):  # Check substrings of length 1 to 7
            if i - length >= 0:
                sub = s[i - length:i]
                if sub[0] == '0':  # No leading zeros allowed
                    continue
                num = int(sub)
                if is_prime(num):
                    dp[i] += dp[i - length]

    return dp[n]

# Example usage
s = input().strip()
print(count_prime_partitions(s))
*/