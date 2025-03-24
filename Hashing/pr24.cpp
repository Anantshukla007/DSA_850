/*-> Please find the increasing subsequence of size - “3” - Return true if it exists; return false if it does not exist 

-> [ 18 5 4 3 2 1 8 10] 

Answer :- True; [(1,8,10) , (5,8,10) , (4,8,10) , (3,8,10) ,(2,8,10)]

-> [ 5 4 3 2 1 8] 

Answer :- False. 
*/


/*#include <iostream>
#include <vector>
#include <algorithm>

bool function(const std::vector<int>& b, int n) {
    std::vector<int> s(n + 1);
    s[n] = b[n];

    for (int i = n - 1; i >= 1; i--) {
        s[i] = std::max(b[i], s[i + 1]);
    }

    int p = b[1];
    for (int i = 2; i <= n - 1; i++) {
        if (p < b[i] && b[i] < s[i + 1]) {
            return true;
        }
        p = std::min(p, b[i]);
    }

    return false;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> b(n + 1);

    for (int i = 1; i <= n; i++) {
        std::cin >> b[i];
    }

    bool result = function(b, n);
    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}
*/


/*def function(b, n):
    p = [0] * n
    s = [0] * n

    p[0] = b[0]  # First element remains the same
    s[n - 1] = b[n - 1]  # Last element remains the same

    # Compute prefix minimum
    for i in range(1, n):
        p[i] = min(b[i], p[i - 1])

    # Compute suffix maximum
    for i in range(n - 2, -1, -1):
        s[i] = max(b[i], s[i + 1])

    # Check condition
    for i in range(1, n - 1):
        if p[i - 1] < b[i] and b[i] < s[i + 1]:
            return True

    return False

if __name__ == "__main__":
    n = int(input())
    b = list(map(int, input().split()))  # Direct input as a list

    result = function(b, n)
    print("True" if result else "False")
*/