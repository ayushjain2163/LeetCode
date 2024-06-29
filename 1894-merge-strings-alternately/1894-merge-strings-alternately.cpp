class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        string ans;
        int i=0,j=0;
        while(m>0 && n>0){
            ans.push_back(word1[i++]);
            n--;
            ans.push_back(word2[j++]);
            m--;  
        }
        while(m>0){
            ans.push_back(word2[j++]);
            m--; 
        }
        while(n>0){
            ans.push_back(word1[i++]);
            n--;
        }
        return ans;
    }
};