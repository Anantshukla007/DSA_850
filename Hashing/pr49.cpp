/*Implement a prototype of a UDP network protocol.
There is a 2d array of size n x 2, requests. At time t = requests[i][0], requests[i] [1] packets are to be sent over the network. The network can hold at most max_packets packets in the pipeline. It delivers the data to the client at rate packets per second, i.e. rate packets are removed from the queue and delivered to the client every second.
If the number of packets exceeds max_packets at any time, the packets remaining at that time are dropped.
Given the array requests, and the integers, max_packets, and rate, find the total number of packets that are dropped.
Example
Suppose requests = [[1, 8], [4, 9], [6, 7]], rate = 2, and max packets = 10.*/


/*#include <iostream>
#include <vector>
using namespace std;

int countDroppedPackets(vector<vector<int>>& requests, int rate, int max_packets) {
    int dropped = 0;
    int curr_queue = 0;
    int last_time = 0;

    for (auto& req : requests) {
        int time = req[0], packets = req[1];
        int time_passed = time - last_time;

        // Process already queued packets
        curr_queue = max(0, curr_queue - time_passed * rate);

        // Add new packets
        curr_queue += packets;

        // Drop extra packets
        if (curr_queue > max_packets) {
            dropped += (curr_queue - max_packets);
            curr_queue = max_packets;
        }

        last_time = time;
    }

    return dropped;
}
*/



/*def count_dropped_packets(requests, rate, max_packets):
    dropped = 0
    curr_queue = 0
    last_time = 0

    for time, packets in requests:
        time_passed = time - last_time

        # Process already queued packets
        curr_queue = max(0, curr_queue - time_passed * rate)

        # Add new packets
        curr_queue += packets

        # Drop packets if over capacity
        if curr_queue > max_packets:
            dropped += curr_queue - max_packets
            curr_queue = max_packets

        last_time = time

    return dropped
*/