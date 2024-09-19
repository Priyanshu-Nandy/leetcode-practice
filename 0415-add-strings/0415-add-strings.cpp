class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string ans="";
        while(i>=0 && j>=0){
            int digit1= num1[i]-'0';
            int digit2=num2[j]-'0';
            int sum=(digit1+digit2+carry)%10;
            carry=(digit1+digit2+carry)/10;
            char c='0'+sum;
            ans.push_back(c);
            i--;
            j--;
        }
        while(i>=0){
            int digit1= num1[i]-'0';
            int sum=(digit1+carry)%10;
            carry=(digit1+carry)/10;
            char c='0'+sum;
            ans.push_back(c);
            i--;
        }
        while(j>=0){
            int digit2=num2[j]-'0';
            int sum=(digit2+carry)%10;
            carry=(digit2+carry)/10;
            char c='0'+sum;
            ans.push_back(c);
            i--;
            j--;
        }
        if(carry){
            ans=ans+"1";
        }
        reverse(ans.begin(),ans.end());
    return ans;
    }
    
};