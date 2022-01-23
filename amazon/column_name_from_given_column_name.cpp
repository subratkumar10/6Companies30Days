
class Solution{
    public:
    string colName (long long int n)
    { string s;
    while(n>0)
    {
        s+=('A'+(n-1)%26);
        n=(n-1)/26;
    }
    reverse(s.begin(),s.end());
    return s;
        // your code here
    }
};