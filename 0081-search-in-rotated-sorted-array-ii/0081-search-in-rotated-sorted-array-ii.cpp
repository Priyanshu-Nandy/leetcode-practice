class Solution {
public:
    bool search(vector<int> arr, int k) {
    int start=0,end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==k)
        return true;
        if(arr[mid]==arr[start] && arr[mid]==arr[end]){
            start++;
            end--;
            continue;
        }
        //right half is sorted
        if(arr[start]>arr[mid])
        {
            if(k>=arr[mid] && k<=arr[end]){
                start=mid+1;
            }
            else
            end=mid-1;
        }
        //left half is sorted
        else
        {
            if(k<=arr[mid] && k>=arr[start]){
                end=mid-1;
            }
            else
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return false;   
    }
};