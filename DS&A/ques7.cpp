class Answer {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp=heights;
        int c=0;
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)
        {
            if(heights[i]!=temp[i])
                c++;
        }
        return c;
    }
};
