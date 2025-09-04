#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;                
        int ansIndex = 0;        
        int n = chars.size();     
        while (i < n) {
            int j = i + 1;

            // Find the next different character
            while (j < n && chars[i] == chars[j]) {
                j++;
            }

            // Place the current character
            chars[ansIndex++] = chars[i];

            // Count occurrences
            int count = j - i;

            // If count > 1, write it as digits
            if (count > 1) {
                string tmp = to_string(count);
                for (char c : tmp) {
                    chars[ansIndex++] = c;
                }
            }

            // Move to next group
            i = j;
        }

        // Resize to new length
        chars.resize(ansIndex);

        return ansIndex;
    }
};

int main() {
    Solution sol;
    vector<char> chars = {'a','a','b','b','c','c','c'};
    
    int newLength = sol.compress(chars);

    cout << "Compressed length: " << newLength << endl;
    cout << "Compressed array: ";
    for (char c : chars) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
