# 11.py
class ListNode:
    def __init__(self,val:int):
        self.val=val
        self.next=ListNode | None = None
# 访问index的节点
def access(head:ListNode,index:int)->ListNode|None:
    for _ in range(index):
        if not head:
            return None
        head=head.next
    return head