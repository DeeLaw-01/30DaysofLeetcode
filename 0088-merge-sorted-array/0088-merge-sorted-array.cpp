class Solution {
public:
    void merge(vector<int>& nums1, int n1, vector<int>& nums2, int n2) {
        int i =n1;
        for(const auto& num: nums2){
            nums1[i++]=num; 
        }
        sort(nums1.begin(), nums1.end());
   
    }
};