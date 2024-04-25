#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};

int main() {
    Solution solution;
    
    // Example usage
    string input1 = "123456";
    string input2 = "24680";
    
    cout << "Largest odd number from " << input1 << ": " << solution.largestOddNumber(input1) << endl;
    cout << "Largest odd number from " << input2 << ": " << solution.largestOddNumber(input2) << endl;
    
    return 0;
}
