class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     for(int i=0;i<n;i++){
    //         nums1[i+m]=nums2[i];
    //     }
    //     sort(nums1.begin(),nums1.end());

    vector<int> temp;
    for(int i=0;i<m;i++){
        temp.push_back(nums1[i]);
    }
    int i=0,j=0,x=0;
    while(i<m && j<n){
        if(temp[i]<=nums2[j])
        {
            nums1[x++]=temp[i];
            i++;
        }
        else{
            nums1[x++]=nums2[j];
            j++;
        }
    }
    while(i<m){
        nums1[x++]=temp[i];
        i++;
    }
    while(j<n){
        nums1[x++]=nums2[j];
        j++;
    }
    
    }

};