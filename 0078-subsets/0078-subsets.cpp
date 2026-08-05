class Solution {
public:

    void getAllSubsets(vector<int>& arr,vector<int>& ans,int i,vector<vector<int>> &allsubsets)
    {
        if(i==arr.size())
        {
            allsubsets.push_back({ans});
            return;
        }
        ans.push_back(arr[i]);
        getAllSubsets(arr,ans,i+1,allsubsets);

        ans.pop_back();
        getAllSubsets(arr,ans,i+1,allsubsets);
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> allsubsets;
        vector<int>ans;
        getAllSubsets(arr,ans,0,allsubsets);
        return allsubsets;
    }
};


    
