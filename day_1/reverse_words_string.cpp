#include <stack>
#include <string>
#include<iostream>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        stack<string> wordStack; // Stack to store words
        int n = s.size();
        string ans = "";
        for (int i = 0; i < n; i++) {
            string temp;
            // Skip spaces
            if (s[i] == ' ') {
                continue;
            }
            // Extract word
            while (i < n && s[i] != ' ') {
                temp += s[i];
                i++;
            }
            // Push word onto the stack
            wordStack.push(temp);
        }
        // Reconstruct the string by popping words from the stack
        while (!wordStack.empty()) {
            ans += wordStack.top();
            wordStack.pop();
            if (!wordStack.empty()) {
                ans += " "; // Add space between words
            }
        }
        return ans;
    }
};
