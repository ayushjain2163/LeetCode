class Solution {
public:
    char findTheDifference(string s, string t) {
        
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // int i=0;
        // for(char c: s){
        //     if(c!=t[i]){
        //         return t[i];
        //     }
        //     i++;
        // }
        // return t[t.size()-1];

        int ans=0;
        for(int i=0;i<s.size();i++) ans+=s[i];
        for(int i=0;i<t.size();i++) ans-=t[i];
        return char(abs(ans));
    }
};