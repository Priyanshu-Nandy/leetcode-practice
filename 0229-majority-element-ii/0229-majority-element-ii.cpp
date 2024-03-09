class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int  size=nums.size();
        int elem1=0,elem2=0,count1=0,count2=0;
        for(int i=0;i<size;i++){
            if(count1==0 && elem2!=nums[i]){
                elem1=nums[i];
                count1=1;
            }
            else if(count2==0 && elem1!=nums[i]){
                elem2=nums[i];
                count2=1;
            }
            else if(elem1==nums[i]){
                count1++;
            }
            else if(elem2==nums[i]){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0,count2=0;
        for(int i=0;i<size;i++){
            if(elem1==nums[i]){
                count1++;
            }
            else if(elem2==nums[i]){
                count2++;
            }
        }
        if(count1>(size/3)){
            ans.push_back(elem1);
        }
        if(count2>(size/3)){
            ans.push_back(elem2);
        }
        return ans;
    }
};