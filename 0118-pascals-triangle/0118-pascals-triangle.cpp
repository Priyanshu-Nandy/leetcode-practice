class Solution {
private:
    vector<int> rowAdd(int n){
    int ans=1;
    vector<int> ansVector;
    ansVector.push_back(ans);
    if(n==1)
    return ansVector;
    for(int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/i;
        ansVector.push_back(ans);
    }
    return ansVector;

}
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascalAns;
    for(int i=1;i<=numRows;i++){
        vector<int> row=rowAdd(i);
        pascalAns.push_back(row);
    }
    return pascalAns;
    }
};