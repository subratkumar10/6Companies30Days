class Solution{
public:	

    static bool compare(char x,char y)
    {    map<char,int>mp;
         mp['!']=1;
	    mp['#']=2;
	     mp['$']=3;
	    mp['%']=4;
	     mp['&']=5;
	    mp['*']=6;
	     mp['@']=7;
	    mp['^']=8;
	     mp['~']=9;
        return mp[x]<mp[y];
    }
	void matchPairs(char nuts[], char bolts[], int n) {
	   
	     sort(nuts,nuts+n,compare);
	     sort(bolts,bolts+n,compare);
	    
	    
	    // code here
	}

};