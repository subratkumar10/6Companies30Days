string encode(string src)
{   
    string res="";
    char x='0';
    int count=0;
    for(int i=0;i<src.length();i++)
    {   if(x=='0')
    {
        //cout<<x<<endl;
        x=src[i];
        res+=x;
        count++;
        continue;
    }
        if(x!=src[i])
        {  char temp='0'+count;
            res+=temp;
            x=src[i];
            res+=x;
            count=1;
            continue;
        }
        count++;
    }
    char temp='0'+count;
    res+=temp;
    return res;
  //Your code here 
}  