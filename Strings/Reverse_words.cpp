#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseWords(vector<char>& s) {
        // Step 1: Reverse the whole string
        reverse(s.begin(), s.end());

        // Step 2: Reverse each word individually
        int n = s.size();
        int start = 0;
        for (int end = 0; end <= n; end++) {
            if (end == n || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1; // move to next word
            }
        }
    }
};

int main() {
    Solution sol;
    vector<char> s = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    sol.reverseWords(s);

    for (char c : s) cout << c;
    cout << endl; 
    return 0;
}
