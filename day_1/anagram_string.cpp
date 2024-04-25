#include <unordered_map>
#include <string>
#include<iostream>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for (auto x : s) {
            count[x]++;
        }
        for (auto x : t) {
            count[x]--;
        }
        for (auto it : count) {
            if (it.second != 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    // Example usage
    Solution solution;
    string s = "anagram", t = "nagaram";
    cout << "Are they anagrams? " << std::boolalpha << solution.isAnagram(s, t) << endl;
    return 0;
}
