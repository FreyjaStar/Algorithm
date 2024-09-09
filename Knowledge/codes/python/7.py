# 7.py
def remove(nums:list[int],index:int):
    for i in range(len(nums),index):
        nums[i]=nums[i+1]
