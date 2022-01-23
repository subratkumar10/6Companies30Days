class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
     
     Node* p=head;
     Node* prev=NULL;
     while(p)
     {
         int m=M;
         int n=N;
     while(m>0&&p)
     {
       prev=p;
       p=p->next;
       m--;
     }
     while(n>0&&p)
     {
       p=p->next;
       n--;
     }
     prev->next=p;
     }
      
        //Add code here   
    }
};