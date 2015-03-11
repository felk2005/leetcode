//
//  main.cpp
//  leetcode
//
//  Created by YuanXuan on 1/15/15.
//  Copyright (c) 2015 felk. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Solution.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    std::vector<int> testCase = {1,2,3,4,4,4,5,5,5,6,6,8,8,9};
    int index = (new Solution())->BinarySearch(testCase, 7);
    std::cout << index;
    return 0;
}
