class Solution {
public:
    bool findSuccessor(vector<int>& hand,int groupSize, int i,int n){
        int next=hand[i]+1;
        hand[i]=-1;
        int count=1;
        i=i+1;
        while(i<n && count<groupSize){
            if(hand[i] == next){
                next=hand[i]+1;
                hand[i]=-1;
                count++;
            }
            i++;
        }
        return count == groupSize;
    }

    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int len=hand.size();
        if(len % groupSize!=0)
            return false;
        sort(hand.begin(),hand.end());
        
        for(int i=0;i<len;i++){
            if(hand[i]>=0){
                if(!findSuccessor(hand,groupSize,i,len))
                    return false;
            }
        }        
        return true;
    }
};