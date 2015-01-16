//
//  Solution.h
//  leetcode
//
//  Created by YuanXuan on 1/16/15.
//  Copyright (c) 2015 felk. All rights reserved.
//

#ifndef leetcode_Solution_h
#define leetcode_Solution_h
#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    /**
     * @param grid: a list of lists of integers.
     * @return: An integer, minimizes the sum of all numbers along its path
     */
    int minPathSum(vector<vector<int> > &grid) {
        // write your code here
        
        // TODO: critical solution
        
        vector<vector<int> > costTable;
        for (int i = 0; i < grid.size(); ++i)
        {
            vector<int> row;
            for (int j = 0; j < grid[i].size(); ++j)
            {
                row.push_back(0);
            }
            costTable.push_back(row);
        }
        costTable[0][0] = grid[0][0];
        for (int i = 1; i < grid[0].size(); ++i)
        {
            costTable[0][i] = costTable[0][i - 1] + grid[0][i];
        }
        for (int i = 1; i < grid.size(); ++i)
        {
            costTable[i][0] = costTable[i - 1][0] + grid[i][0];
        }
        for (int i = 1; i < grid.size(); ++i)
        {
            for (int j = 1; j < grid[i].size(); ++j)
            {
                costTable[i][j] = min(costTable[i - 1][j], costTable[i][j - 1]) + grid[i][j];
            }
        }
//        for (int i = 0; i < grid.size(); ++i)
//        {
//            for (int j = 0; j < grid[i].size(); ++j)
//            {
//                cout << "\t" << costTable[i][j];
//            }
//            cout << endl;
//        }
        
        return costTable.back().back();        
    }
};

#endif
