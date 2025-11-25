class Solution {
public:
    
    void getallsubset(vector<int>& nums ,vector<int>& ans, int i , vector<vector<int>> &allsubsets){
        if(i==nums.size()){
            allsubsets.push_back({ans});
            return;
        }
         
         //include
        ans.push_back(nums[i]);
        getallsubset(nums,ans,i+1,allsubsets);

        ans.pop_back();

    
        //exclude
         getallsubset(nums,ans,i+1,allsubsets);
    } 

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubsets;
        vector<int> ans;
        getallsubset(nums,ans,0,allsubsets);
        return allsubsets;
    }
};