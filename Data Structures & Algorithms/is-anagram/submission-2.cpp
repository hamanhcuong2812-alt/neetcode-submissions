class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
        for(char kitu : s)
        {
            count[kitu-'a']++;
        }
        for(char kitu : t)
        {
            count[kitu - 'a']--;
        }
        for(int i =0;i<26;i++)
        {
            if (count[i]!=0)
            return false;
        }
    return true;
    }
};
