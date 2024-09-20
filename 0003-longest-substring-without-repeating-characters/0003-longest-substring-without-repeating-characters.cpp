class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int count[256]={0};
        int ans=0;
        while(j<s.size()){
            count[s[j]]++;
            while(count[s[j]]>1){
                count[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
         return ans;
    }
   
};