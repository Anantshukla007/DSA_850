/*Given a string please tell how many substring tuple([l1..r1],[l2…r2],[l3…r3]) are in the palindrome. 


Fix the first string 
*/

/*#include <iostream>
#include <vector>
using namespace std;

void mainFunction() {
    string s;
    cin >> s;
    int n = s.length();

    // DP table to check if substring s[i:j] is a palindrome
    vector<vector<int>> dp(n, vector<int>(n, 0));
    // DP table to count palindromic substrings in s[i:j]
    vector<vector<int>> dpc(n, vector<int>(n, 0));

    // Base case: Single character substrings are palindromes
    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
        dpc[i][i] = 1;
    }

    // Base case: Two-character substrings
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 1;
            dpc[i][i + 1] = 3; // "aa" counts as 3: "aa", "a", "a"
        } else {
            dpc[i][i + 1] = 2; // Just "a" and "b" separately
        }
    }

    // Filling DP table for substrings of length 3 or more
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1] == 1) {
                dp[i][j] = 1; // Mark as palindrome
            }
            // Count palindromes using inclusion-exclusion
            dpc[i][j] = dpc[i + 1][j] + dpc[i][j - 1] - dpc[i + 1][j - 1] + dp[i][j];
        }
    }

    // Compute palindromic pairs (pdpp[i] = palindromic pairs ending at i)
    vector<int> pdpp(n, 0);
    for (int i = 0; i < n; i++) {
        int b = 0;
        for (int j = i; j >= 0; j--) {
            if (dp[j][i] == 1) {
                b++; // Count palindromes ending at i
            }
        }
        if (i + 1 < n) {
            int rest = dpc[i + 1][n - 1]; // Count of palindromes in remaining part
            pdpp[i] = b * rest; // Pairing palindromes
        }
    }

    // Compute palindromic triplets (pdpt[i] = palindromic triplets ending at i)
    vector<int> pdpt(n, 0);
    for (int i = 0; i < n; i++) {
        int b = 0;
        for (int j = i; j >= 0; j--) {
            if (dp[j][i] == 1) {
                b++; // Count palindromes ending at i
            }
        }
        if (i + 1 < n) {
            int rest = 0;
            for (int k = i + 1; k < n; k++) {
                rest += pdpp[k]; // Sum all palindromic pairs
            }
            pdpt[i] = b * rest; // Compute valid palindromic triplets
        }
    }

    // Compute total palindromic triplets
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += pdpt[i];
    }
    cout << total << endl;
}

int main() {
    mainFunction();
    return 0;
}
*/

///python////
/*#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int n = s.size();

    vector<vector<int>> dp(n, vector<int> (n, 0));
    vector<vector<int>> dpc(n, vector<int> (n, 0));

    //lenght 1
    for(int i=0;i<n;i++){
        dp[i][i]=1;
        dpc[i][i]=1;
    }

    //lenght 2
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            dp[i][i+1]=1;
            dpc[i][i+1]=3;
        }else{
            dpc[i][i+1]=2;
        }
    }

    //lenght 3
    for(int len=3;len<=n;len++){
        for(int i=0;i<n-len+1;i++){
            int j = i+len-1;
            if(s[i]==s[j] && dp[i+1][j-1]==1){
                dp[i][j] = 1;
            }
            dpc[i][j] = dpc[i+1][j] + dpc[i][j-1] - dpc[i+1][j-1] + dp[i][j];
        }
    }

    //making palindromic pairs
   
    vector<int> pdpp(n, 0);
    for(int i=0;i<n;i++){
        int j = i;
        int b = 0;
        while(j>=0){
            if(dp[j][i]==1){
                b++;
            }
            j--;
        }
        if(i+1<n){
            int rest = dpc[i+1][n-1];
            // cout<<dpc[i+1][n-1]<<endl;
            int val = b*rest;
            pdpp[i] = val;
        }
        
    }

    // int pairSum = 0;

    // for(int i=0;i<pdpp.size();i++){
    //     pairSum += pdpp[i];
    //     cout<<pdpp[i]<<" ";
    // }cout<<endl;
    // cout<<pairSum<<endl;

    //pdpp(palindromic dp pairs)

    //making palindromic dp triplets
    vector<int> pdpt(n, 0); //pdpt --> palindromic dp triplets
    for(int i=0;i<n;i++){
        int j = i;
        int b = 0;
        while(j>=0){
            if(dp[j][i]==1){
                b++;
            }
            j--;
        }
        if(i+1<n){
            int rest = 0;
            for(int k=i+1;k<n;k++){
                rest += pdpp[k];
            }
            int val = b*rest;
            pdpt[i] = val;
        }
        
    }

    int total = 0;
    for(int i=0;i<n;i++){
        // cout<<pdpt[i]<<" ";
        total += pdpt[i];
    }
    cout<<total<<endl;

   
}*/