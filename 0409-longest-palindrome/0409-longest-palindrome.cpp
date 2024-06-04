class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char,int> mp;
        for(char c : s){
            mp[c]++;
        }
        int count=0;
        bool hasodd=false;
        for (auto i:mp){
            if(i.second%2==0)
                count=count+i.second;
            else{
                count=count+i.second-1;
                hasodd=true;
            }
        }
        if(hasodd==true){
            return count+1;
        }
        return count;
        

    }
};