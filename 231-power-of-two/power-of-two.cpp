class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n && log2(n) == trunc(log2(n));
    }
};