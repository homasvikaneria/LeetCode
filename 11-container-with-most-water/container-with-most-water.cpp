class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxWater=0;
        int gap=n-1;
        int i=0;
        int j=n-1;
        while(i<=j){
            int maxW;
            
            if(height[i]<height[j]){
                maxW=gap*height[i];
                i++;
            }else{
                maxW=gap*height[j];
                j--;
            }
            maxWater=max(maxWater,maxW);
            gap--;
        }
        return maxWater;
    }
};


