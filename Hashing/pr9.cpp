/*Alex has a ples of boxes with varying heights, in each step, Alex can remove any number of boxes from the tallest pile to reduce its height to match the next tallest pile. Determine the minimum number of steps required to make all piles equal in height.
Example
15=3
boxesin Piles=15217
Initial State
Step 1
Step 2
Step 3
In the first step, remove 3 boxes from boxestoPiles(0) and the new array is boxesin Piles122, 11. Now reduce the two taller piles by box each to match the height of the shortest pile. This takes 2 steps because each step is performed on only one pile. The final number of steps required is 3.
Function Description
Complete the function piles Oflaves in the editor below.
piles Ofiloxes has the following parameter(s):
int boxesin Pilesin) each boxesin Pilestil represents the initial height of one pile
Return
long the minimum number of steps required
Constraints
boxestres2x 10*/






/*#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input size of the array (excluding b[0])
    
    vector<int> b(n + 1, 0);  // Initialize the b array of size n + 1, with all elements 0
    map<int, int> k;  // Map to store frequency of elements

    // Input array b (index 1 to n)
    for (int i = 1; i <= n; i++) {
        cin >> b[i];  // Input each element of b
    }

    // Count frequency of each element in b
    for (int i = 1; i <= n; i++) {
        k[b[i]] += 1;  // Increment frequency of b[i] in map k
    }

    // Create a vector of pairs to store (element, frequency)
    vector<pair<int, int>> g;
    for (auto u : k) {
        g.push_back({u.first, u.second});  // Insert element and its frequency into vector g
    }

    int size = g.size();
    int step = 0;  // Initialize step variable to 0

    // Traverse the vector g backward and calculate the steps
    for (int i = size - 1; i >= 1; i--) {
        g[i - 1].second += g[i].second;  // Add frequency of g[i] to g[i-1]
        step += g[i].second;  // Increment step by the frequency of g[i]
        g[i].second = 0;  // Reset frequency of g[i] to 0
    }

    // Output the result
    cout << step << endl;

    return 0;
}
*/

/*python*/

/*from collections import defaultdict

def main():
    # Input size n
    n = int(input())
    
    # Initialize array b of size n+1
    b = [0] * (n + 1)
    
    # Input values for b[1] to b[n]
    for i in range(1, n + 1):
        b[i] = int(input())
    
    # Dictionary to store frequencies of elements
    k = defaultdict(int)
    
    # Calculate frequency of each element in b
    for i in range(1, n + 1):
        k[b[i]] += 1
    
    # Sort the dictionary by keys in descending order and create a list of pairs
    # Using sorted() to ensure the keys are sorted in descending order
    g = sorted(k.items(), key=lambda x: x[0], reverse=True)
    
    # Size of the list
    size = len(g)
    step = 0  # Initialize step to 0
    #print(size)
    #print(g[2][0])
    # Traverse the list g backwards and update frequencies and steps
    for i in range(size-1):
        print(g[i][0])
        g[i+1] = (g[i+1][0], g[i+1][1] + g[i][1])
        
        # Increment the step by the frequency of the current element
        step += g[i][1]
        # Set the frequency of the current element to 0
        g[i] = (g[i][0], 0)
    # Output the result
    print(step)

if __name__ == "__main__":
    main()
*/
