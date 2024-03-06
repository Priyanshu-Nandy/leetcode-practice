class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        int longest=1;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size();i++)
            st.insert(nums[i]);
        for(auto it:st){
            if(st.find(it-1)==st.end())
            {
                int x=it;
                int length=1;
            while(st.find(x+1)!=st.end())
            {
                x++;
                length++;
            }
            if(length>longest)
                longest=length;
            }
            
        }
        return longest;
    }
};