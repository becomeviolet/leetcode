#ifndef BASECLASS_H
#define BASECLASS_H

class BaseSolution {
public:

    // ���麯������������Ҫʵ��
    virtual std::vector<int> twoSum(std::vector<int>& nums, int target) = 0;
    
};

#endif // baseclass.cpp
