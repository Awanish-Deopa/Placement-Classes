class Answer {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=INT_MIN;
        for(int i=0;i<accounts.size();i++){
            int s=0;
            for(int j:accounts[i]){
                s+=j;
            }
            if(s>res)
                res=s;
        }
        return res;
    }
};
