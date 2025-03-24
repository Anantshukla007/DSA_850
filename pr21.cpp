/*https://leetcode.com/problems/4sum-ii/ 
*/

/*#include <bits/stdc++.h>
using namespace std;

int sum(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4, int n) {
    unordered_map<int, int> mp;

    // Store sums of pairs from nums1 and nums2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mp[nums1[i] + nums2[j]]++;
        }
    }

    int count = 0;

    // Find complements in nums3 and nums4
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int su = nums3[i] + nums4[j];
            if (mp.count(-su)) {
                count += mp[-su];
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums1(n), nums2(n), nums3(n), nums4(n);

    for (int i = 0; i < n; i++) {
        cin >> nums1[i] >> nums2[i] >> nums3[i] >> nums4[i];
    }

    int ans = sum(nums1, nums2, nums3, nums4, n);
    cout << ans << endl;

    return 0;
}
*/

/*python*/


/*from collections import defaultdict

def sum(nums1, nums2, nums3, nums4, n):
    mp = defaultdict(int)

    # Store sums of pairs from nums1 and nums2
    for i in range(n):
        for j in range(n):
            mp[nums1[i] + nums2[j]] += 1

    count = 0

    # Find complements in nums3 and nums4
    for i in range(n):
        for j in range(n):
            su = nums3[i] + nums4[j]
            count += mp[-su]

    return count

# Read input
n = int(input())
nums1, nums2, nums3, nums4 = [], [], [], []

for _ in range(n):
    a, b, c, d = map(int, input().split())
    nums1.append(a)
    nums2.append(b)
    nums3.append(c)
    nums4.append(d)

# Compute and print result
print(sum(nums1, nums2, nums3, nums4, n))
*/