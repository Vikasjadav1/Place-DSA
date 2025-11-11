class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp = 0;
        int rp=n-1;
        int maxwater=0;

        while(lp<rp){
            int w = rp - lp ;
            int h = min(height[lp],height[rp]);
            int currwater=w*h;
            maxwater=max(maxwater,currwater);

            height[lp]<height[rp]?lp++ : rp--;
        }
        return maxwater;
    }
};