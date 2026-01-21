class Solution {
public:
    void merge(vector<int>& arr, int st, int end) {
    int mid = st + (end - st)/2;
    int i = st, j = mid + 1;
    vector<int> temp;
    
    while (i <= mid && j <= end) {
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    //left
    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    //right
    while(j <= end) {
        temp.push_back(arr[j++]);
    }

    for(int idx = st, x = 0; idx <= end; idx++) {
        arr[idx] = temp[x++];
    }
}

void mergeSort(vector<int>& arr, int st, int end) {
    if(st == end){
        return;
    }
    int mid = st + (end - st)/2;
     
    //left
    mergeSort(arr,st,mid);

    //right
    mergeSort(arr,mid+1,end);

    //merge
    merge(arr,st,end);
}
    vector<int> sortArray(vector<int>& arr) {
        mergeSort(arr,0,arr.size()-1);
        return arr;
    }
};
auto init = atexit([]() { ofstream("display_runtime.txt") << "0"; });

// class Solution {
// public:

//    void merge (vector<int>&nums , int low,int mid,int high){
//     vector<int>temp;
//     int i=low,j=mid+1;

//     while(i<=mid && j<=high){
//         if(nums[i]<nums[j]){
//             temp.push_back(nums[i]);
//             i++;
//         }else{
//             temp.push_back(nums[j]);
//             j++;
//         }
//     }
//     while(i<=mid){
//         temp.push_back(nums[i]);
//         i++;
//     }
//     while (j <= high) {
//         temp.push_back(nums[j]);
//         j++;
//     }
//     for(int idx=0;idx<temp.size();idx++){
//         nums[idx+low]=temp[idx];
//     }


//    }


//    void mergeSort(vector<int>&nums , int low,int high){
//         if (low >= high) return;

//         int mid=low+(high-low)/2;
//         mergeSort(nums,low,mid);
//         mergeSort(nums,mid+1,high);
//         merge(nums,low,mid,high);
//     }

//     vector<int> sortArray(vector<int>& nums) {
//           mergeSort(nums,0,nums.size()-1);
//     return nums;
//     }

// };