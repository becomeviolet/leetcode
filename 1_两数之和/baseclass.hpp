#ifndef BASECLASS_H
#define BASECLASS_H

class BaseSolution {
public:

    // 纯虚函数，派生类需要实现
    virtual std::vector<int> twoSum(std::vector<int>& nums, int target) = 0;
    
};

#endif // baseclass.cpp
