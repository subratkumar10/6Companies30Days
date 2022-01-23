class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        
        int n=arr.size();
        int inr=0,dcr=0;
        int max1=INT_MIN;
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            { 
            
               
                if(inr==1)
                { dcr=1;
                    count++;
                   }
                else{
                    continue;
                }
            }
            else if(arr[i]>arr[i-1])
            { if(inr==1&&dcr==1)
               {
                  max1=max(max1,count+1);
                cout<<max1<<endl;
                dcr=0;
                inr =1;
                count=1;
                continue;
               }
                inr =1;
               count++;
                
            }
            else{
                 if(inr==1&&dcr==1)
               {
                  max1=max(max1,count+1);
                dcr=0;
                inr =0;
                     count=0;
                continue;
               }
               dcr=0;
                inr=0;
                count=0;
            }
           
        }
        if(inr==1&&dcr==1)
        max1=max(max1,count+1);
        if(max1<3)
            return 0;
        return max1;
        
    }
};