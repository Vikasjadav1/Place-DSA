class Solution {
public:
     set<vector<int>> s;
     void getcombination(vector<int>& arr , int idx, int tar ,  vector<vector<int>> &ans ,  vector<int> &combination){
        if(idx==arr.size() || tar<0){
            return;
        }
        if(tar==0){
            if(s.find(combination)==s.end()){
                ans.push_back(combination);
                s.insert(combination);
                return;
            }
        }

        combination.push_back(arr[idx]);
        //single
        getcombination(arr,idx+1,tar-arr[idx],ans,combination);

        //multiple
         getcombination(arr,idx,tar-arr[idx],ans,combination);

         combination.pop_back();
         //exlude
          getcombination(arr,idx+1,tar,ans,combination);
     }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>> ans;
        vector<int> combination;
        getcombination(arr,0,tar,ans,combination);
        return ans;
    }
};