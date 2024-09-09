// 7.cpp
#include <vector>
int main()
{
    vector<int> nums;

}
//清空
nums.clear()
//添加元素
nums.push_back(1);
nums.push_back(2);
//插入元素
nums.insert(nums.begin()+3,6);//在索引3处插入6
//删除元素
nums.erase(nums.begin()+3);//删除索引为3 的元素
