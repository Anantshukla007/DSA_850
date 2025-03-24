/*Input:
N = 3
X = {"abc", "ade", "bbc"}
Output: [3, 0, 0]
Explanation:
For String "abc"(i 1), the subsequent strings are "ade" and "bbc". The matching characters of "abc" with "ade" is 1 which is 'a' at index 1 and the matching characters of "abc" with "bbc" is 2 which are 'b' and 'c' at index 2 and 3. The answer for "abc" is 1+2=3
For String "ade" (i = 2). the subsequent string is "bbc". The matching characters of "ade" with "bbc' is 0. The answer for "ade" is 0.
For String "bbc" (i 3), there are no subsequent strings. The answer for "bbc" is 0.
We can note that the answer for the last string in the input array will always be 0 as there are no subsequent strings.*/




/*#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> matchingCnt(int n, std::vector<std::string>& X) {
        std::vector<std::vector<int>> g(200000 + 5, std::vector<int>(28, 0));
        std::vector<int> p(n, 0);

        for (int i = n - 1; i >= 0; i--) {
            std::string u = X[i];
            int c = 0;
            int d = u.size();
            for (int j = 0; j < d; j++) { // j --> column number
                int y = int(u[j]) - 97;
                c = c + g[j][y]; // g[j][y] --> tells you the frequency of y in col "j"
                g[j][y] = g[j][y] + 1;
            }
            p[i] = c;
        }

        return p;
    }
};

int main() {
    Solution sol;
    int n = 3;
    std::vector<std::string> X = {"abc", "ade", "abc"};
    std::vector<int> result = sol.matchingCnt(n, X);

    for (int i = 0; i < n; ++i) {
        std::cout << result[i] << " ";
    }

    return 0;
}
*/


/*python*/


/*def solution(n,x):
	g = [[0]*28 for _ in range(20000+5)]
	
	p =[0]*n
	
	for i in range(n-1,-1,-1):
		u = x[i]
		c =0 
		d = len(u)
		
		for j in range(d):
			y = ord(u[j])-97
			c = c+g[j][y]
			g[j][y] += 1
		p[i] = c
	return p
	
n = 3
X = ["abc", "ade", "abc"]

result = solution(n,X)

print(" ".join(map(str,result)))
*/