class Answer {
public:
    int countConsistentStrings(string start, vector<string>& words) {
        int result=0;
        int c=0;
        for(auto i : words)
        {
            for(int j = 0; j < start.size(); j++)
            {
                for(int k = 0; k < i.size(); k++)
                {
                    if(start[j] == i[k])
                        c++;
                }
            }

            if(c == i.size())
                result++;
            c = 0;
        }

        return result;
    }
};
