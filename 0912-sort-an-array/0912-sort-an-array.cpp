class Solution {
private:
    void merge(vector<int>&nums,int start,int end,int mid){
        vector<int>temp((end-start)+1);
        int index = 0;
        int left = start;
        int right = mid + 1;
        while(left<=mid && right<=end){
            if(nums[left]<=nums[right]){
                temp[index++] = nums[left++];
            }
            else{
                temp[index++] = nums[right++]; 
            }
        }
        while(left<=mid){
                temp[index++] = nums[left++];
        }
        while(right<=end){
                temp[index++] = nums[right++]; 
        }
        index = 0;
        for(int i=start;i<=end;i++){
            nums[i] = temp[index++];
        }
        
    }
    void mergeSort(vector<int>&nums,int start,int end){
        if(start==end){
            return;
        }
        int mid = start + (end-start)/2;
        mergeSort(nums,start,mid);
        mergeSort(nums,mid+1,end);
        merge(nums,start,end,mid);
    }
    public:
    
    vector<int> sortArray(vector<int>& nums) {
        int start=0;
        int end = nums.size()-1;
        mergeSort(nums,start,end);
        return nums;
    }
};