class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int gap=height.size()-1;
        int maxWater=INT_MIN;
        while(i<=j){
            int maxW;
            if(height[i]<height[j]){
                maxW=(gap)*height[i];
                i++; 

            }else{
                maxW=(gap)*height[j];
                j--;

            }
            if(maxWater<maxW){
                maxWater=maxW;
            }
            gap--;
        }
        return maxWater;
    }
};
