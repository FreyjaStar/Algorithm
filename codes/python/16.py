# 16.py
class LinkedListStack:

    def __init__(self) -> None:
        self._peek:ListNode |None =None
        self._size:int =0

    def size(self)->int:
        return self._size
    
    def is_empty(self)->bool:
        return self._size==0
    
    def push(self,val:int):
        node=ListNode(val)
        node.next