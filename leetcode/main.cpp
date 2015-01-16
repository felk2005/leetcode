//
//  main.cpp
//  leetcode
//
//  Created by YuanXuan on 1/15/15.
//  Copyright (c) 2015 felk. All rights reserved.
//
#include <vector>
#include <iostream>
#include "Solution.h"
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    vector<vector<int> > testCase;
    for (int i = 0; i < 3; ++i)
    {
        vector<int> row;
        for (int j = 0; j < 5; ++j)
        {
            row.push_back(i * 10 + j);
            cout << "\t" << (i * 10 + j);
        }
        testCase.push_back(row);
        cout << endl;
    }
    
    int result = (new Solution)->minPathSum(testCase);
    cout << "Result is " << result << endl;
    return 0;
}
