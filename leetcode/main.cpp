//
//  main.cpp
//  leetcode
//
//  Created by YuanXuan on 1/15/15.
//  Copyright (c) 2015 felk. All rights reserved.
//

#include <iostream>
#include "subsets.h"
int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    vector<int> source = {1,2,2};
    vector< vector<int> > result = (new Solution)->permute(source);
    for (int i = 0; i < result.size(); ++i)
    {
        std::cout << "[";
        for (int j = 0; j < result[i].size(); ++j)
        {
            std::cout << result[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }
    std::cout << "Result count:" << result.size() << std::endl;
    
    return 0;
}
