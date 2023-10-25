// Question LInk - https://leetcode.com/contest/biweekly-contest-112/problems/check-if-strings-can-be-made-equal-with-operations-i/
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1[0] == s2[0] && s1[2] == s2[2])
        {
            if(s1[1] == s2[1] && s1[3] == s2[3]) return true;
            else if(s1[1] == s2[3] && s1[3] == s2[1]) return true;
            else return false;
        }
        else if(s1[0] == s2[2] && s1[2] == s2[0])
        {
            if(s1[1] == s2[1] && s1[3] == s2[3]) return true;
            else if(s1[1] == s2[3] && s1[3] == s2[1]) return true;
            else return false; 
        }
        return false;
    }
};