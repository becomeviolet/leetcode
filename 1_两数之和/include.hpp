#include<iostream>

#include <vector>  
#include <unordered_map>  
#include<algorithm>

#ifndef WAY1_H
#define WAY1_H
//哈希表
namespace way1 {
    class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target);
    };
}
#endif // way1.cpp
//暴力枚举
#ifndef WAY2_H
#define WAY2_H

namespace way2 {
    class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target);
    };
}
#endif // way2.cpp

#ifndef WAY3_H
#define WAY3_H
//双指针
namespace way3 {
    class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target);
    };
}
#endif // way3.cpp

