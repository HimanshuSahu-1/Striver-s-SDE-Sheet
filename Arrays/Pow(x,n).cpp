class Solution {
public:
    double myPow(double x, int n) {
        long long  nn=n;
        double ans=1.0;
        if(nn<0){
            x=1.0/x ;
            nn= -nn;
        }
        while(nn>0){
            if(nn%2){
                ans= ans * x ;
                nn=nn -1;
            }
            else {
                x= x * x; 
                nn=nn/2;
            }
        }
        // if(n<0){
        //     ans=1.0/ans;
        // }
        return ans;
    }
};