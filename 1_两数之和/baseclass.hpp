// BaseSolution.h
#ifndef BASECLASS_H
#define BASECLASS_H

#include <vector>

class BaseSolution {
public:
    // 析构函数声明为虚函数，确保子类正确析构
    virtual ~BaseSolution() {}

    // 纯虚函数，派生类需要实现
    virtual std::vector<int> twoSum(std::vector<int>& nums, int target) = 0;
    
};

#endif // BASESOLUTION_H
