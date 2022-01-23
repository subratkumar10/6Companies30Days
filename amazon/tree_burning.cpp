class Solution {
  public:
  
 Node* find_target(Node* root,int target)
  {
      if(!root)
      return NULL;
      if(root->data==target)
      return root;
      Node* left=find_target(root->left,target);
       if(left)
       return left;
       Node* right=find_target(root->right,target);
       if(right)
       return right;
  }
  map<Node*,Node*>mp;
  
    int minTime(Node* root, int target) 
    { if(!root)
    return 0;
        
      Node* t_node=find_target(root,target);
      
        
       queue<Node*>q;
       q.push(root);
       while(!q.empty())
       {
         Node* top=q.front();
         q.pop();
         if(top->left)
         { q.push(top->left);
             mp[top->left]=top;
         }
         if(top->right)
         {
             q.push(top->right);
             mp[top->right]=top;
         }
           
       }
       map<Node*,int>tim;
       tim[t_node]=0;
       map<Node*,int>vis;
       vis[t_node]=1;
       queue<Node*>qn;
       qn.push(t_node);
       int max1=0;
       while(!qn.empty())
       {
           Node* curr=qn.front();
           qn.pop();
           max1=max(max1,tim[curr]);
           if(curr->left&&!vis[curr->left])
           {
               tim[curr->left]=tim[curr]+1;
               vis[curr->left]=1;
               qn.push(curr->left);
               
           }
            if(curr->right&&!vis[curr->right])
           {
               tim[curr->right]=tim[curr]+1;
               vis[curr->right]=1;
               qn.push(curr->right);
               
           }
           if(mp[curr]&&!vis[mp[curr]])
           {
               tim[mp[curr]]=tim[curr]+1;
               vis[mp[curr]]=1;
               qn.push(mp[curr]);
           }
       }
       return max1;
       
      
        // Your code goes here
    }
};