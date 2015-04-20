/*
    题意：求字符串的最后一个单词（不含空字符的）
    解法：从后往前扫，先排除空字符，然后统计
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        int i = s.size()-1;
        while(i>=0 && s[i] == ' ') i--;
        while(i>=0 && s[i]!= ' '){
            i --;
            res++;
        }
        return res;
    }
};