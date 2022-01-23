class Solution {
	public:
		string FirstNonRepeating(string A){
		    
		    unordered_map<char,int>mp;
		    string res;
		    string ans;
		    queue<char>q;
		    for(int i=0;i<A.length();i++)
		    {
		       mp[A[i]]++;
		       
		         if(mp[A[i]]==1)
		         q.push(A[i]);
		         while(!q.empty()&&mp[q.front()]>=2)
		         q.pop();
		         if(q.empty())
		         res+='#';
		         else res+=q.front();
		        //cout<<res<<endl;
		      
		    }
		    return res;
		    // Code here
		}

};