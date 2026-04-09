class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int n=height.size();
        int gap=n-1;
        int i=0;int j=height.size()-1;
        while(i<j){
            int area;
            if(height[i]<height[j]){
                area=height[i]*gap;
                i++;
            }else{
                area=height[j]*gap;
                j--;
            }
            maxArea=max(maxArea,area);
            gap--;
        }
        return maxArea;
    }
};