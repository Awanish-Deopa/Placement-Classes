class Answer {
public:
    string restoreString(string s, vector<int>& indices) {
        string out;
        out.resize(s.size());

        for(int i = 0; i < indices.size(); ++i) {
            out[indices[i]] = s[i];
        }
        return out;
    }
};

