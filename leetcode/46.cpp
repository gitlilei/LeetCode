/*
    题意：给一个集合，求所有的排列
    做法：
*/
class Solution {
public:
    vector<vector<int> >res;int count ;
    void dfs(int A[],vector<int>num,int n,int cur){
        if(cur == n){//找到一个排列
            res.push_back(vector<int>());
            for(int i = 0 ; i < n ; i++){
                res[count].push_back(A[i]);
            }
            count ++;
            return;
        }
        for(int i = 0 ; i < n ; i++){
            if(!i || num[i]!=num[i-1]){
                //排除重复的情况如{1,1,1}这种
                int c1 = 0,c2 = 0;
                for(int j = 0 ; j <cur ; j++) if(A[j] == num[i]) c1++;
                //统计当前集合里num[i]的个数
                for(int j = 0 ; j <n ; j++) if(num[j] == num[i]) c2++;
                //统计初始集合里num[i]的个数
                if(c1<c2){
                //当当前集合num[i]的个数小于初始集合num[i]的个数是才进行下一步搜索。
                    A[cur] = num[i];
                    dfs(A,num,n,cur+1);
                }
            }
        }
    }
    vector<vector<int> > permute(vector<int> &num) {
        count = 0;
        int n = num.size();
        int A[n];
        dfs(A,num,n,0);
        return res;
    }
};