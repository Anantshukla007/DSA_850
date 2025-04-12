/*Amazon Web Services (AWS) is a cloud computing platform with multiple servers. One of the servers is assigned to serve customer requests. There are n customer requests placed sequentially in a queue, where the th request has a maximum waiting time denoted by wait[i]. That is, if the ith request is not served within wait[i] seconds, then the request expires and it is removed from the queu The server processes the request following the First In First Out (FIFO) principle. The 1st request is processed first, and the nth request is served last. At each second, the first request in the queue is processed. At the next second, the processed request and any expired requests are removed from the queue.
Given the maximum waiting time of each request denoted by the array wait, find the number of requests present in the queue at every second until it is empty.
request expires without being processed when time wait[i]. It must be processed while time < wait(i). See the example below for wait[3].
The initial queue represents all requests at time 0 in the order they must be processed.
Example
The number of requests is n = 4, and their maximum wait times are wait = [2, 2, 3, 1)


time=0 seconds, the 1st request is served.
The number of requests in the queue is
4. queue=[1, 2, 3, 41.
time1 second, request 1 is removed because it is processed, request 4 (wait[3]=1) is removed because time wait[3] = 1 which exceeds its maximum waiting time. Also, request 2 is served. The number of requests in the queue at time = 1 seconds is 2. queue=[2, 3].
time 2 seconds, request 2 is removed. because it is processed, request 3 is served. The number of requests in the queue is 1. queue 131

Start from t = 0 

-> [3 1 2 1] 

Output [4 , 2 , 1 , 0 ] 

T = 0 there are 4 requests. 
T = 1 there are 2 requests.
T = 2 there is 1 request
T = 3 there are 0 requests. 

Solve this using both c++ and python and also give the intution how you cam up with the approach*/



/*#include <bits/stdc++.h>
using namespace std;

// This function calculates the number of valid requests remaining
// at various time steps based on the provided wait times for each request.
vector<int> findRequestsInQueue(vector<int> wait) {
    // Create an unordered_map (hash table) to count how many requests have each wait time.
    unordered_map<int, int> freq;
    // The 'ans' vector will store the number of active requests in the queue 
    // at different points in time. Its size is the same as the input vector.
    vector<int> ans(wait.size());
    
    // Build the frequency map: for each wait time, increment its count.
    for (int i = 0; i < wait.size(); i++) {
        freq[wait[i]]++;
    }
    
    // At time t = 0, no request has been processed or expired.
    // Thus, all requests are still in the queue.
    ans[0] = wait.size();
    
    // 'runningSum' acts as an accumulator that accounts for the effect of 
    // processed or expired requests on the remaining request count.
    int runningSum = 0;
    // 'j' tracks the index of the next request to consider. We start from index 1 
    // because the initial queue size at time=0 is already set.
    int j = 1;
    
    // Simulate the process over time starting at t = 1.
    // The loop runs while time steps and request index are within bounds.
    for (int t = 1; t < wait.size() && j < wait.size(); t++) {
        // If the current request's maximum wait time is greater than the current time 't',
        // it means the request is still valid (i.e. it has not expired).
        if (wait[j] > t) {
            // A temporary value 'sum' is computed by adding 1 to runningSum.
            // (This variable is computed here but not used in further calculations.)
            int sum = runningSum + 1;
            
            // Add the frequency count of the current wait time to runningSum.
            // This step incorporates the effect of all requests with the same wait time.
            runningSum += freq[wait[j]];
            
            // 'v' is computed to get the provisional number of requests starting
            // from the current position in the vector (including the current one).
            int v = wait.size() - j + 1;
            
            // The net number of valid (active) requests is computed by subtracting runningSum 
            // from 'v'. This is stored in the answer vector at index 'j'.
            ans[j] = v - runningSum;
            
            // Since the current request has been processed (or is being accounted for),
            // decrement its count in the frequency map.
            freq[wait[j]]--;
            
            // Move the index to the next request.
            j++;
        } else { 
            // If the current request's wait time is less than or equal to the current time 't',
            // the request has expired.
            
            // Decrement its frequency (remove it from consideration).
            freq[wait[j]]--;
            
            // Decrement runningSum as this expired request reduces the net count.
            runningSum--;
            
            // Move to the next request.
            j++;
        }
    }
    
    // Return the vector containing the number of requests remaining at different time steps.
    return ans;
}

int main() {
    int n;
    // Read the number of requests.
    cin >> n;
    vector<int> b(n);
    
    // Read the maximum wait times for each request.
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    // Obtain the result vector by calling the function.
    vector<int> ans = findRequestsInQueue(b);
    
    // Print the number of active requests at each time step.
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}
*/


///python////


/*#include <bits/stdc++.h>
using namespace std;

// This function calculates the number of valid requests remaining
// at various time steps based on the provided wait times for each request.
vector<int> findRequestsInQueue(vector<int> wait) {
    // Create an unordered_map (hash table) to count how many requests have each wait time.
    unordered_map<int, int> freq;
    // The 'ans' vector will store the number of active requests in the queue 
    // at different points in time. Its size is the same as the input vector.
    vector<int> ans(wait.size());
    
    // Build the frequency map: for each wait time, increment its count.
    for (int i = 0; i < wait.size(); i++) {
        freq[wait[i]]++;
    }
    
    // At time t = 0, no request has been processed or expired.
    // Thus, all requests are still in the queue.
    ans[0] = wait.size();
    
    // 'runningSum' acts as an accumulator that accounts for the effect of 
    // processed or expired requests on the remaining request count.
    int runningSum = 0;
    // 'j' tracks the index of the next request to consider. We start from index 1 
    // because the initial queue size at time=0 is already set.
    int j = 1;
    
    // Simulate the process over time starting at t = 1.
    // The loop runs while time steps and request index are within bounds.
    for (int t = 1; t < wait.size() && j < wait.size(); t++) {
        // If the current request's maximum wait time is greater than the current time 't',
        // it means the request is still valid (i.e. it has not expired).
        if (wait[j] > t) {
            // A temporary value 'sum' is computed by adding 1 to runningSum.
            // (This variable is computed here but not used in further calculations.)
            int sum = runningSum + 1;
            
            // Add the frequency count of the current wait time to runningSum.
            // This step incorporates the effect of all requests with the same wait time.
            runningSum += freq[wait[j]];
            
            // 'v' is computed to get the provisional number of requests starting
            // from the current position in the vector (including the current one).
            int v = wait.size() - j + 1;
            
            // The net number of valid (active) requests is computed by subtracting runningSum 
            // from 'v'. This is stored in the answer vector at index 'j'.
            ans[j] = v - runningSum;
            
            // Since the current request has been processed (or is being accounted for),
            // decrement its count in the frequency map.
            freq[wait[j]]--;
            
            // Move the index to the next request.
            j++;
        } else { 
            // If the current request's wait time is less than or equal to the current time 't',
            // the request has expired.
            
            // Decrement its frequency (remove it from consideration).
            freq[wait[j]]--;
            
            // Decrement runningSum as this expired request reduces the net count.
            runningSum--;
            
            // Move to the next request.
            j++;
        }
    }
    
    // Return the vector containing the number of requests remaining at different time steps.
    return ans;
}

int main() {
    int n;
    // Read the number of requests.
    cin >> n;
    vector<int> b(n);
    
    // Read the maximum wait times for each request.
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    // Obtain the result vector by calling the function.
    vector<int> ans = findRequestsInQueue(b);
    
    // Print the number of active requests at each time step.
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}
*/