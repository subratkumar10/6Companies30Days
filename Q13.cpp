string decodedString(string s){
        
        
        string res;
        stack<char>st;
        string temp;
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]==']')
            {
                string temp;
              while(!st.empty()&&st.top()!='[')
              {
                 char x=st.top();
                 temp+=x;
                 st.pop();
              }
              st.pop();
              reverse(temp.begin(),temp.end());
              string num;
              while(!st.empty()&&(st.top()>='0'&&st.top()<='9'))
              {
                   num+=st.top();
                   st.pop();
              }
              reverse(num.begin(),num.end());
              int nn=stoi(num);
              while(nn)
              {
                  for(auto ch:temp)
                      st.push(ch);
                      nn--;
              }
            }
            else{
                st.push(s[i]);
            }
            
        }
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
        // code here
    }