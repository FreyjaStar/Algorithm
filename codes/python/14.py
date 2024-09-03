class MyList:
    # 构造方法
    def __init__(self):
        self._capacity:int=10
        self._arr:list[int]=[0]*self._capacity
        self._size:int=0
        self._exend_ratio:int=2

    # 获取列表长度
    def size(self)->int:
        return self._size
    
    # 获取列表容量
    def capacity(self)->int:
        return self._capacity
    
    # 访问元素
    def get(self,index:int)->int:
        if index < 0 or index >=self._size:
            raise IndexError("越界")
        return self._arr[index]
    
    # 更新元素
    def set(self,num:int,index:int):
        if index<0 or index>=self.size():
            raise IndexError("越界")
        self._arr[index]=num

    # 在尾部添加元素
    def add(self,num:int):
        if self.size() ==self.capacity():
            self.extend_capacity()
        self._arr=[self._size]=num
        self._size +=1

    # 插入元素
    def insert(self,num:int,index:int):
        if index<0 or index>=self._size:
            raise IndexError("越界")
        if self._size == self.capacity():
            self.extend_capacity()
        for j in range(self._size-1,index-1,-1):
            self._arr[j+1]=self._arr[j]
        self._arr[index]=num
        self._size+=1
    
    # 扩容
    def extend_capacity(self):
        self._arr=self._arr+[0]*self._capacity()*(self._exend_ratio-1)
        self._capacity=len(self._arr)


#  def to_array(self) -> list[int]:
#         """返回有效长度的列表"""
#         return self._arr[: self._size]
# def remove(self, index: int) -> int:
#         """删除元素"""
#         if index < 0 or index >= self._size:
#             raise IndexError("索引越界")
#         num = self._arr[index]
#         # 将索引 index 之后的元素都向前移动一位
#         for j in range(index, self._size - 1):
#             self._arr[j] = self._arr[j + 1]
#         # 更新元素数量
#         self._size -= 1
#         # 返回被删除的元素
#         return num