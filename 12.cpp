/*
    题意：把阿拉伯数字转换成罗马数字
    解法：直接暴力枚举了。
*/
class Solution {
public:
    int power(int k){
        int res = 1;
        for(int i = 0 ; i < k ; i++) res*=10;
        return res;
    }
    string intToRoman(int num) {
        string ans = "";int k = 0;
        while(num){
            int temp = (num%10)*power(k);k++;
            num/=10;
            string cur = "";
            while(temp){
                if(temp<4){
                    cur= cur+'I' ;temp-=1;
                }else if(temp == 4){
                    cur = cur+"IV";temp-=4;
                }else if(temp <9){
                    cur = cur+'V';temp-=5;
                }else if(temp <10){
                    cur = cur+"IX";temp-=9;
                }else if(temp <40){
                    cur = cur+'X' ; temp-=10;
                }else if(temp <50){
                    cur = cur+"XL";temp-=40;
                }else if(temp <90){
                    cur = cur+'L';temp-=50;
                }else if(temp<100){
                    cur = cur+"XC";temp-=90;
                }else if(temp<400){
                    cur = cur+'C';temp-=100;
                }else if(temp<500){
                    cur = cur+"CD";temp-=400;
                }else if(temp<900){
                    cur = cur+'D';temp-=500;
                }else if(temp<1000){
                    cur = cur+"CM";temp-=900;
                }else {
                    cur = cur+'M';temp-=1000;
                }
            }
             ans = cur+ans;
        }
        return ans;
    }
};