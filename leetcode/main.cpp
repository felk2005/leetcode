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

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    vector<vector<string> > result = (new Solution)->solveNQueens(4);
    for (int i = 0; i < result.size(); ++i)
    {
        for (int j = 0; j < result[i].size(); ++j)
        {
            cout << result[i][j] << endl;
        }
        cout << endl << endl;
    }
    cout << "total:" << result.size();

    return 0;
}
