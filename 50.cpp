/*
    题意：实现pow(x,n)函数
    坑: 1>要用矩阵快速幂做
        2>n可能为负数
        3>n可能去INT_MIN所以需要类型转换
*/
class Solution {
public:
    double pow(double x, int n) {
        double res = 1;
        int sign = 0;
        long m = (long)n;
        if(m<0) {
            sign = 1;
            m = 0-m;
        }
        while(m){
            if(m&1){
                res*=x;
            }
            x*=x;
            m>>=1;
        }
        return sign ?1.0/res:res;
    }
};