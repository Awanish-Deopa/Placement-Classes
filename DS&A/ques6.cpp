class Answer {
public:
int arrayPairSum(vector<int>& number) {

    int sum=0;
    int n=number.size();
    sort(number.begin(),number.end());


    for(auto i=number.begin();i<number.end()-1;i+=2)
        sum+=min(*i,*(i+1));

    return sum;

}
};
