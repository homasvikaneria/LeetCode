class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int index=0;
        int peak=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>peak){
                peak=arr[i];
                index=i;
            }
        }
        return index;
    }
};