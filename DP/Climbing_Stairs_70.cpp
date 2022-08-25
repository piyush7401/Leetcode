class Solution {
public:
    int climbStairs(int n) {
        if(n == 0){
            return 0;}
        else if(n== 1){
            return 1;
        }
        else if(n == 2){
            return 2;
        }
        int prev = 2;
        int prev1 = 1;
        for(int i =3;i<=n;i++){
            int cur = prev + prev1;
            prev1 = prev;
            prev = cur;
        }
        return prev;
    }
};