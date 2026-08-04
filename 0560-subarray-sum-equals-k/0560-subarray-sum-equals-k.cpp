class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int count=0;
        vector<int> preSum(n,0);
        preSum[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            preSum[i]=preSum[i-1]+arr[i];
        }
        unordered_map<int,int> m;
        for(int j=0;j<n;j++)
        {
            if(preSum[j]==k)
            {
                count++;
            }
            int val=preSum[j]-k;
            if(m.find(val)!=m.end())
            {
                count+=m[val];
            }
            if(m.find(preSum[j])==m.end())
            {
                m[preSum[j]]=0;
            }
            m[preSum[j]]++;
        }
        return count;
    }
};