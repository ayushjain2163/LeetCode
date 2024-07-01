class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        int flag=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2!=0){
                count++;
                flag=1;
            }
            else{
                flag=0;
            }
            if(flag==0)
                count=0;
            if(count==3)
                return true;
        }
        return false;
    }
};