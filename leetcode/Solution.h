//
//  Solution.h
//  leetcode
//
//  Created by YuanXuan on 1/15/15.
//  Copyright (c) 2015 felk. All rights reserved.
//

#ifndef leetcode_Solution_h
#define leetcode_Solution_h
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<vector<string> > solveNQueens(int n) {
        
        vector<int> path;
        solve(n, path);
        return result;
    }
    
private:
    vector<vector<string> > result;
    
    void AddResult(vector<int>& coordinates)
    {
        
        vector<string> sol;
        for (int i = 0; i < coordinates.size(); ++i)
        {
            stringstream ss;
            for (int j = 0; j < coordinates.size(); ++j)
            {
                if (coordinates[i] == j)
                {
                    ss << "Q";
                }
                else
                {
                    ss << ".";
                }
            }
            sol.push_back(ss.str());
        }
        result.push_back(sol);
    }
    /**
     *  coordinates: the index of element is row, the value of element is column
     */
    int indent = 0;
    bool solve(int dimension, vector<int>& coordinates)
    {
        // for debug
        ++indent;
//        for (int i = 0; i < coordinates.size(); ++i)
//        {
//            cout << getIndent(indent) << i << "," << coordinates[i] << endl;
//        }
//        cout << getIndent(indent) << "==========" << endl;
        
        
        if (!validQueenPosition(coordinates))
        {
            //coordinates.pop_back();
            --indent;
            return false;
        }
        unsigned long rows = coordinates.size();
        if (rows == dimension)
        {
            AddResult(coordinates);
            //coordinates.pop_back();
            --indent;
            return true;
        }
        // add element to next row
        for (int i = 0; i < dimension; ++i)
        {
            coordinates.push_back(i);
            solve(dimension, coordinates);
            coordinates.pop_back();
        }
        --indent;
        return true;
    }
    
    string getIndent(int indent)
    {
        if (indent < 1)
            return "";
        stringstream ss;
        for (int i = 0; i < indent; ++i)
        {
            ss << "\t";
        }
        return ss.str();
    }
    static bool validQueenPosition(vector<int>& coordinates)
    {
        for (int i = 0; i < coordinates.size(); ++i)
        {
            for (int j = i + 1; j < coordinates.size(); ++j)
            {
                int xdiff = j - i;
                int ydiff = abs(coordinates[i] - coordinates[j]);
                if (xdiff == 0
                    || ydiff == 0
                    || xdiff == ydiff)
                {
                    return false;
                }
                
            }
        }
        return true;
    }
};
#endif
