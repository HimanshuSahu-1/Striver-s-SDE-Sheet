class Solution {
public:
 bool Binary_search(int low,int high ,vector<int>&ans,int target){
       
      while(low<=high){
            int mid=(low + high )/2;
          if(ans[mid]>target){
              high=mid-1;
          }
          else if(ans[mid]<target){
              low=mid+1;
          }
          else if(ans[mid]==target)
          return true;

      }
      return false;
 }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans.push_back(matrix[i][j]);
            }
        }
          
          return Binary_search(0,m*n -1,ans,target);

    }
};