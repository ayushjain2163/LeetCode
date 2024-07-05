class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag=0;
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                break;
            }
            digits[i]=0;
            if(i==0){
                flag=1;
            }
        }
        if(flag==1){
            digits.push_back(0);
            digits[0]=1;
        }
        return digits;
    }
};