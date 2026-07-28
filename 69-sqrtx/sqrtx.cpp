class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        int mid = x/2;
        int ans = 0;

        if(x==0)    return 0;
        if(x==1)    return 1;

        while(s <= e){
            long long squr = 1LL * mid*mid;

            if(squr == x){
                return mid;
            }
            else if(squr < x){
                ans = mid;
                s = mid+1;
            }else   e = mid-1;

            mid = s + (e-s)/2;
        }

        return ans;
    }
};