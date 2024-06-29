class Solution {
public:
    char findTheDifference(string s, string t) {
        // unordered_map <char,int> map1;
        // unordered_map <char,int> map2;
        // for(char c : s){
        //     map1[c]++;
        // }
        // for(char c : t){
        //     map2[c]++;
        // }
        // for(auto a : map2){
            
        // }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        for(char c: s){
            if(c!=t[i]){
                return t[i];
            }
            i++;
        }
        return t[t.size()-1];
    }
};