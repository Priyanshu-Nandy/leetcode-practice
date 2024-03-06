class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        //for one col [][0]
        //for one row [0][]
        int m=arr.size();
        int n=arr[0].size();
        int col0=1;
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
            if(arr[i][j]==0)
            {
                arr[i][0]=0;
                if(j!=0)
                arr[0][j]=0;
                else
                col0=0;
            }
           }
       }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(arr[i][0]==0||arr[0][j]==0)
                    arr[i][j]=0;
            }
        }
        for(int j=1;j<n;j++)    
        {
            if(arr[0][0]==0)
                arr[0][j]=0;
        }
        for(int i=0;i<m;i++)
        {
            if(col0==0)
                arr[i][0]=0;
        }
        
    }
};