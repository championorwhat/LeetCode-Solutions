class Solution {
public:
    int strStr(string haystack, string needle) {
        int s1 = haystack.length(), s2 = needle.length();
        if (s2 == 0) return -1;
        for (int i = 0; i <= s1 - s2; i++) {
            int j = 0;
            while (haystack[i + j] == needle[j] && j < s2) {
                j++;
            }
            if (j == s2) {
                return i;
            }
        }
        return -1;
    }
};
