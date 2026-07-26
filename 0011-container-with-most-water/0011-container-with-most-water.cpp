class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxWat=0;
        int l=0;
        int r=n-1;
        while(l<r){
            int w=r-l;
            int ht=min(height[l],height[r]);
            int curWat=w*ht;
            maxWat=max(maxWat,curWat);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }

        }
        return maxWat;

    }
};