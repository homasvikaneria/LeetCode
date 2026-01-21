class Solution {
public:
    int addDigits(int num) {

        if(num<10){
            return num;
        }

        int n=num;
        int temp=0;
        while(n>0|| temp>9){
            if(n==0){
                n=temp;
                temp=0;
            }
            temp+=n%10;
            n/=10;
        }
        return temp;;
    }
};