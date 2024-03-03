class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<arr.size();i++)
        {
            if(mpp.find(target-arr[i])!=mpp.end())
            {
                ans.push_back(mpp[target-arr[i]]);
                ans.push_back(i);
            }
            mpp[arr[i]]=i;
            
        }
        return ans;
        
    }
};