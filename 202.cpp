/*
    题意：判断一个数是不是happy数（用这个数每一位的平方的和代替这个数，
    不断重复这个过程，如果最后这个数是1，那么这个数就是happy数）
    解法：用map容器映射一下，判断当前数是否在前面出现过，如果出现过那么
    这个数就不是happy数，不过这样子的空间复杂度太高
*/
class Solution {
public:
    bool isHappy(int n) {
        map<long,bool>m;
        m.clear();
        long ans = (long)n;
        while(ans!=1){
            long cur = ans;ans = 0;
            while(cur){
                ans +=(cur%10)*(cur%10);
                cur/=10;
            }
            if(m[ans]) return false;
            m[ans] = 1;
        }
        return true;
    }
};