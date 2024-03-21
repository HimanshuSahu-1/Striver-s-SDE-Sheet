 class Solution {
public:
   vector<int>generateRow(int row){
          long long res=1;
          vector<int>ans;
          ans.push_back(1);

          for(int col=1;col<row;col++){
              res=res*(row-col);
              res=res/col;
              ans.push_back(res);
          }
          return ans;
   }
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>>res;

         for(int i=1;i<=numRows;i++){
             res.push_back(generateRow(i));
         }
         return res;
    }
};