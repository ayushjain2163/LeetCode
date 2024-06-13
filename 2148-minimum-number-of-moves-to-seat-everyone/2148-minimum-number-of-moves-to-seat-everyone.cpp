class Solution {
public:
    int diff(int a,int b){
        if(a>b)
            return a-b;
        return b-a;
    }
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int ans=0;
        for(int i=0;i<seats.size();i++){
            ans=ans+diff(seats[i],students[i]);
        }
        return ans;
    }
};