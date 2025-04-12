/*Explanation:-> Given an array of zeros and ones ; find the number of subarrays which have this property :->


(number of zeroes)
—---------------------    =    x / y 
(number of ones)

N = 7 
A ->[1 0 1 1 1 1 1]
X/Y = ½ 
Output -> [1 0 1] ;  X = 1 ; Y = 2 
[0 1 1] ; X = 1 ; Y = 2 
Ans is 2 . 





N = 7 
A-> [1 0 0 1 1 1 1]
X/Y = ½
*/



/*#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;
    vector<int> arr(n);
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    ll x, y;
    cin >> x >> y;  // Given ratio x/y
    
    // Compute prefix sum where each element gets weight: +y if 0, -x if 1.
    vector<ll> prefix(n+1, 0);
    // prefix[0] is defined as 0.
    for (ll i = 0; i < n; i++){
        if (arr[i] == 0) {
            prefix[i+1] = prefix[i] + y;
        } else {
            prefix[i+1] = prefix[i] - x;
        }
    }
    
    // Count frequency of each prefix sum.
    unordered_map<ll, ll> freq;
    for (ll s : prefix) {
        freq[s]++;
    }
    
    ll count = 0;
    // For each prefix sum value with frequency f, add f*(f-1)/2.
    for (auto p : freq) {
        ll f = p.second;
        count += (f * (f-1)) / 2;
    }
    
    cout << count << "\n";
    return 0;
}
*/



//python//

/*def count_subarrays_with_ratio(arr, x, y):
    n = len(arr)
    prefix = [0] * (n + 1)
    # Compute prefix sums with weight: +y for 0, -x for 1
    for i in range(n):
        if arr[i] == 0:
            prefix[i+1] = prefix[i] + y
        else:
            prefix[i+1] = prefix[i] - x
    
    freq = {}
    for s in prefix:
        freq[s] = freq.get(s, 0) + 1
    
    count = 0
    for f in freq.values():
        count += f * (f - 1) // 2
    return count

# Example usage:
if __name__ == '__main__':
    n = int(input().strip())
    arr = list(map(int, input().split()))
    x, y = map(int, input().split())  # For example, input: 1 2 for ratio 1/2
    print(count_subarrays_with_ratio(arr, x, y))
*/