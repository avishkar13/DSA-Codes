#include <bits/stdc++.h>
using namespace std;

// Mock API for local testing
bool isBadVersion(int version) {
    int firstBad = 4; // Example: version 4 is the first bad version
    return version >= firstBad;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int end = n;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (isBadVersion(mid)) {
                end = mid; // First bad is at mid or before
            } else {
                start = mid + 1; // First bad is after mid
            }
        }
        return start; // start == end here
    }
};

int main() {
    Solution sol;
    int n = 10; // Example: versions 1..10
    cout << "First bad version: " << sol.firstBadVersion(n) << endl;
    return 0;
}
