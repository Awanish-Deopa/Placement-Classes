class Answer {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& number)
    {
        vector<int>result;
        for(int i=0;i<number.size();i++)
        {
            int m=0;
            for(int j=0;j<number.size();j++)
            {
                if(number[i]>number[j])
                    m++;
            }
            result.push_back(m);
        }
        return result;
    }
};
