class Solution {
public:
    int countDigits(int num) {
        string test= to_string(num);
        int divisible=0;
        int y=num;
        for(int i=0; i<test.length(); i++){
            int a=y%10;
            if(num%a==0){
                divisible++;
            }
            y/=10;
        }
        return divisible;
    }
};