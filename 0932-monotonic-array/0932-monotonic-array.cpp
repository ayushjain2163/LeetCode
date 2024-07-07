class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc=true;
        bool desc=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1])
                inc=false;
            if(nums[i]>nums[i-1])
                desc=false;
        }

        if(inc==true || desc==true)
            return true;
        return false;
    }
};