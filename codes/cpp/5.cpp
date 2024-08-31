// 5.cpp
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(nullptr){}
};
ListNode *access(ListNode *head,int index)
{
    for(int i=0;i<index;i++)
    {
        if(head=nullptr)   return nullptr;
        head=head->next;
    }
    return head;
}
