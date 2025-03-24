/*A company Dictory is launching a new dictionary application for mobile users. Initially, the dictionary will not have any words. Instead it will be an auto-learning application that will learn according to a user's given text When a user types text, the application auto-detects the words that appear more than once. The application then stores these words in the dictionary and uses them as suggestions in future typing sessions.
Write an algorithm to identify which words will be saved in the dictionary,*/



/*#include <bits/stdc++.h>
using namespace std;

int main() {
	map<string, int> m;
	int n;cin>>n;
	for (int i=0;i<n;i++){
		string s;cin>>s;
		m[s]++;
	}
	vector<string> ans;
	for (auto i:m)
		if (i.second>1)
			ans.push_back(i.first);
	sort(ans.begin(), ans.end());
	for (string i:ans)cout<<i<<' ';
	return 0;
}*/


//python


/*from collections import defaultdict

n = int(input())
m = defaultdict(int)
for i in range(n):
    s = input().strip()
    m[s] += 1

ans = []
for key, value in m.items():
    if value > 1:
        ans.append(key)

ans.sort()
print(" ".join(ans))
*/