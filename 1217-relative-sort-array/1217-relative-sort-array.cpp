class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int ,int> map;
        vector<int> remaining,result;
        for(int i=0;i<arr2.size();i++){
            map[arr2[i]]=0;
        }
        for(int i=0;i<arr1.size();i++){
            if(map.find(arr1[i]) != map.end()){
                map[arr1[i]]++;
            }
            else{
                remaining.push_back(arr1[i]);
            }
        }
        sort(remaining.begin(),remaining.end());
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<map[arr2[i]];j++){
                result.push_back(arr2[i]);
            }
        }
        for(int i=0;i<remaining.size();i++){
            result.push_back(remaining[i]);
        }
        return result;

    }
};