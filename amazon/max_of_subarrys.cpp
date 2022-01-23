class Solution {
  public:
  
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
       
       
       vector<int>a;
       deque<int>dq;
       
       for(int i=0;i<k;i++)
       {
           while(!dq.empty()&&arr[i]>=arr[dq.back()])
             dq.pop_back();
             dq.push_back(i);
       }
       
     
       for(int i=k;i<n;i++)
       {  a.push_back(arr[dq.front()]);
           while(!dq.empty()&&(dq.front()<=(i-k)))
           dq.pop_front();
           while(!dq.empty()&&arr[i]>=arr[dq.back()])
             dq.pop_back();
             dq.push_back(i);
            // a.push_back(arr[dq.front()]);
           
       }
         a.push_back(arr[dq.front()]);
       return a;
        // your code here
    }
};