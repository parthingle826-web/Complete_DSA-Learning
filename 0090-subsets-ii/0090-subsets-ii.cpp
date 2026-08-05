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
        int idx=i+1;
        while(idx<arr.size() && arr[idx]==arr[idx-1]) idx++;
        getAllSubsets(arr,ans,idx,allsubsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> allsubsets;
        vector<int>ans;
        getAllSubsets(arr,ans,0,allsubsets);
        return allsubsets;
    }
    
};