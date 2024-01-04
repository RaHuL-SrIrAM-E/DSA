// The power of the string is the maximum length of a non-empty substring that contains only one unique character.

// Given a string s, return the power of s.

class Solution {
public:
    int maxPower(string s) {
        int cnt = 1, ans = 1;
        char tmp = s[0];
        for (int i = 1; i < s.length(); i++) {
            char cur = s[i];
            if (cur == tmp) cnt++;
            else {
                tmp = cur;
                cnt = 1;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};
