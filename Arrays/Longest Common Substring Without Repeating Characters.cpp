class Solution {
public:
    int lengthOfLongestSubstring(string nums) {
        unordered_map<int,int>mp;
        int ans=0,j=0;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>1){
             
                 mp[nums[j]]--;
                    
                    j++;
            }
             ans=max(ans,i-j+1);
        }
        return ans;
    }
};