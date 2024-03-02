class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int counter=0,max=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==1)
        counter+=1;
        else
        counter=0;
        if(counter>max)
        max=counter;

    }
        return max;
    }
};