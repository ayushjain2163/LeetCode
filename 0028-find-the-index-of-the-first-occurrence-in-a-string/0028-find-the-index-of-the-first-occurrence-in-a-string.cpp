class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        for(int i=0;i<haystack.size();i++){
            string s=haystack.substr(i,n);
            if(s==needle)
                return i;
        }
        return -1;
    }
};