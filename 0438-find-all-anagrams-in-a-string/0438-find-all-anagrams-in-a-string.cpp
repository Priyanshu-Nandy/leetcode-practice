class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int s_length=s.size();
        int p_length=p.size();
        if(s_length<p_length){
            return {};
        }
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        vector<int>ans;
        for(int i=0;i<p.size();i++){
            hash1[s[i]-'a']++;
            hash2[p[i]-'a']++;
        }
        if(hash1==hash2){
            ans.push_back(0);
        }
        for(int i=p_length;i<s.size();i++){
            hash1[s[i]-'a']++;
            hash1[s[i-p_length]-'a']--;
            if(hash1==hash2){
                ans.push_back(i-p_length+1);
            }
        }
        return ans;
    }
};