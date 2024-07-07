class Solution {
public:
    int numWaterBottles(int bottles, int exchange) {
        int count =bottles;
        int x=0,y=0;
        while(bottles>=exchange){
            x=bottles % exchange;
            y=bottles / exchange;
            count+=y;
            bottles=x+y;
        }

        return count;
    }
};