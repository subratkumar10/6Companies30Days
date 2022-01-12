#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
/*int check(int a,int b)
{
  while(a%b==0) 
  {
      a=a/b;
  }
  return a;
}
bool is_ugly(int i)
{ //int n;
i=check(i,2);
i=check(i,3);
i=check(i,5);
if(i==1)
return true;
else
return false;
    
}
void find_nth(int n)
{
    int i=1;
    int count=1;
    while(count<n)
    {
        i++;
        if(is_ugly(i))
        count++;
    }
    cout<<i<<endl;
    
}*/
/*l find_nth(ll n)
{
    ll *ugly=new ll[n];
    ugly[0]=1;ll i2=0,i3=0,i5=0;
     ll a=2;
    ll b=3;
    ll c=5;
    ll next_value;
    for(ll i=1;i<n;i++)
    { ll min=a;
    
    if(min>b)
    min=b;
     if(min>c)
    min=c;
    next_value=min;
      
      ugly[i]=next_value;
      if(next_value==a)
      {
        i2++;
        a=ugly[i2]*2;
      }
       if(next_value==b)
      {
        i3++;
        b=ugly[i3]*3;
      }
       if(next_value==c)
      {
        i5++;
        c=ugly[i5]*5;
      }
      
    }
    return next_value;
}*/

int main() {
    ll t,n;
    cin>>t;
      ll *ugly=new ll[10001];
    ugly[0]=1;ll i2=0,i3=0,i5=0;
     ll a=2;
    ll b=3;
    ll c=5;
    ll next_value;
    for(ll i=1;i<10001;i++)
    { ll min=a;
    
    if(min>b)
    min=b;
     if(min>c)
    min=c;
    next_value=min;
      
      ugly[i]=next_value;
      if(next_value==a)
      {
        i2++;
        a=ugly[i2]*2;
      }
       if(next_value==b)
      {
        i3++;
        b=ugly[i3]*3;
      }
       if(next_value==c)
      {
        i5++;
        c=ugly[i5]*5;
      }
      
    }
    
    while(t--)
    {
        cin>>n;
        cout<<ugly[n-1]<<endl;
        
    }
	//code
	return 0;
}