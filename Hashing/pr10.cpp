/*Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

 

Example 1:

Input: words = ["bella","label","roller"]
Output: ["e","l","l"]
Example 2:

Input: words = ["cool","lock","cook"]
Output: ["c","o"]*/



/* class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
    if (words.empty()) return result;
    
    vector<int> minFreq(26, INT_MAX);
    
    for (const auto& word : words) {
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            minFreq[i] = min(minFreq[i], freq[i]);
        }
    }
    
    for (int i = 0; i < 26; ++i) {
        while (minFreq[i] > 0) {
            result.push_back(string(1, i + 'a'));
            minFreq[i]--;
        }
    }
    
    return result;
    }
};*/



/*python*/


/*def commonChars(words):
    # Initialize an array of size 26 (for 'a' to 'z') with large values
    common_count = [float('inf')] * 26  

    # Process each word and update the minimum frequency of each character
    for word in words:
        char_count = [0] * 26  # Frequency array for the current word
        for char in word:
            char_count[ord(char) - ord('a')] += 1  # Increment the count for this character
        
        # Update the global minimum frequency of each character
        for i in range(26):
            common_count[i] = min(common_count[i], char_count[i])
    
    # Construct the result list by adding characters based on their minimum frequency
    result = []
    for i in range(26):
        result.extend([chr(i + ord('a'))] * common_count[i])  # Append the character multiple times
    
    return result

# Example Test Cases
print(commonChars(["bella", "label", "roller"]))  # Output: ["e", "l", "l"]
print(commonChars(["cool", "lock", "cook"]))      # Output: ["c", "o"]
*/