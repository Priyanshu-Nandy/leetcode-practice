class Solution {
public:
    void sortColors(vector<int>& arr) {
        int low=0,mid=0,right=arr.size()-1;
        while(mid<=right)
        {
            if(arr[mid]==0)
              {  swap(arr[low],arr[mid]);
                low++;
                mid++;
              }
            else if(arr[mid]==1)
                mid++;
            else
            {
                swap(arr[right],arr[mid]);
                right--;
            }
            
        }
        
    }
};