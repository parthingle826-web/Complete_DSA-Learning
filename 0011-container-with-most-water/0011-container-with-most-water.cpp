class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int n=height.size();
        int i=0,j=n-1;
        while(i<j)
        {
            int width=j-i;
            int hight=min(height[i],height[j]);
            int area=hight*width;
            ans=max(ans,area);
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};