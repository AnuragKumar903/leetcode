class Solution {
public:
    int reverse(int x) {
        int temp = x;
        
        int num = 0;
    while(temp != 0){
            int digit = temp % 10;
            if (num > INT_MAX / 10|| num < INT_MIN / 10)
                return 0;
            num = num*10 + digit;
            temp = temp / 10;
        }
        
        return num;
    }
};