class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX,maxi=0;

        for(int i=0;i<prices.size();i++){
            if(prices[i]<min_price){
                min_price=prices[i];
            }
            else{
                maxi=max(maxi,prices[i]-min_price);
            }
        }
        return maxi;
    }
};