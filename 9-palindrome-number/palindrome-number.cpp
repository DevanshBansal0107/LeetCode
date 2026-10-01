class Solution {
public:
    bool isPalindrome(int x) {
        long long palin=0;
        long long temp=x;
        if(x<0){
            return false;
        }
        else {
            while (x>0){
            palin=(palin*10)+(x%10);
            x= x/10;
            }
                if(temp==palin){
                    return true;
            }
                else {
                    return false;
            }
        }       
    }
};