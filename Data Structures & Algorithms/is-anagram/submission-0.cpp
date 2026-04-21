#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths are not the same, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // Create an unordered map to store the frequency of characters
        unordered_map<char, int> countMap;

        // Count characters in string s
        for (char c : s) {
            countMap[c]++;
        }

        // Subtract counts using string t
        for (char c : t) {
            if (countMap.find(c) == countMap.end()) {
                return false;  // Character not found in map
            }
            countMap[c]--;
            if (countMap[c] == 0) {
                countMap.erase(c);  // Remove from map if count is zero
            }
        }

        // If the map is empty, strings are anagrams
        return countMap.empty();
    }
};
