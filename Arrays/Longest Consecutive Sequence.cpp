class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
                if(nums.empty())
                return 0;
                
           int longest=1;

          for(auto num :  nums){
              if(s.find(num-1)==s.end()){
                  int CurrNum=num;
                int  CurrStreak=1;

                  while(s.find(CurrNum+1)!=s.end()){
                      CurrStreak++;
                      CurrNum++;
                  }
                  longest=max(CurrStreak,longest);
              }
          }
          return longest;
    }
};