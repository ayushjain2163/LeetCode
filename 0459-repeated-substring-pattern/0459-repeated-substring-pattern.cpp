class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //  Memory limit exceed
        // string snew;
        // int n=s.size();
        // for(int i=1;i<n;i++){
        //     snew.push_back(s[i]);
        // }
        // for(int i=0;i<n-1;i++){
        //     snew.push_back(s[i]);
        // }
        // for(int i=0;i<snew.size();i++){
        //     if(snew.substr(i,n)==s)
        //         return true;
        // }
        // return false;

        int n=s.size();
        for(int len =1;len<=n/2;++len){
            if(n%len == 0){
                string substring=s.substr(0,len);
                string constructed;

                for(int i=0;i<n/len;++i){
                    constructed+=substring;
                }
                if(constructed == s)
                    return true;
            }
            
        }
        return false;
    }
};