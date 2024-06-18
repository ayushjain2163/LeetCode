class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=2; i*i <=c;i++){
            int exponent=0;
            while(c%i==0){
                exponent++;
                c/=i;
            }
            if(i % 4==3 && exponent %2 !=0){
                return false;
            }
        }   
        return c%4 != 3;
    }
};