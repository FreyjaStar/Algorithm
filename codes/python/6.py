# 6.py
def insert(nums:list[int],num:int,index:int):
    # 在index处插入num
    for i in range(len(nums)-1,index-1):
        nums[i]=nums[i-1]
    nums[index]=num
