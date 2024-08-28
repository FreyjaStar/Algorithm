// 2.cpp
void insert(int *nums,int size,int num,int index)
{
    for(int i=size-1;i>index;i--)
    {
        nums[i]=nums[i-1];
    }
    num[index]=num;
}