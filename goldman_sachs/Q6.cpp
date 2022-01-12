class Solution {
public:
    
   int find_gcd(int n1,int n2)
    {  if(n1==0)
        return n2;
        return find_gcd(n2%n1,n1);
    }
    string gcdOfStrings(string str1, string str2) {
        
        int x=find_gcd(str1.length(),str2.length());
        
        int p=str1.length()/x;
        int q=str2.length()/x;
            string s1=str1.substr(0,x);
             string s2=str2.substr(0,x);
         string s3;
        string s4;
        for(int i=1;i<=p;i++)
            s3+=s1;
        for(int i=1;i<=q;i++)
            s4+=s2;
        if(s3==str1&&s4==str2&&s1==s2)
            return s1;
        return "";
        
        
    }
};