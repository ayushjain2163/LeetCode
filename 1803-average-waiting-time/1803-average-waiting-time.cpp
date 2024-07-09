class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int time=0, i=0;
        double wt=0;
        int n=customers.size();
        while(i<n){
            if(time<=customers[i][0])
                time=customers[i][0];
            else
                wt+=time-customers[i][0];
            wt+=customers[i][1];
            time+=customers[i][1];
            i++;
        }
        double ans=wt/n;
        return ans;
    }
};