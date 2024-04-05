class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
               if(i!=0  && nums[i]==nums[i-1] )continue;
            for(int j=i+1;j<n;j++){
                 if(j!=i+1 && nums[j]==nums[j-1])continue;
                    int l=j+1;
                    int r=n-1;
                    long long sum=0;
                    while(l<r){
                        sum=0;
                        sum+=nums[i]+nums[j];
                        sum+=nums[l];
                        sum+=nums[r];
                        
                        if(sum==target){
                            vector<int>tmp={nums[i],nums[j],nums[l],nums[r]};
                            ans.push_back(tmp);
                            l++,r--;
                             while(l<r && nums[l]==nums[l-1] )l++;
                        while(l<r && nums[r]==nums[r+1]) r--;
                        }
                        if(sum<target)
                          l++;

                          if(sum>target)
                          r--;

                    }
 

            }
        }
        return ans;
    }
};