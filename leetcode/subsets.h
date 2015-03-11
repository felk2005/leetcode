//
//  subsets.h
//  leetcode
//
//  Created by YuanXuan on 3/5/15.
//  Copyright (c) 2015 felk. All rights reserved.
//

#ifndef leetcode_subsets_h
#define leetcode_subsets_h
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        vector<int> path;
        vector<vector<int> > result;
        permuteHelper(num, path, result);
        return result;
    }
    
private:
    set<int> existElement;
    void permuteHelper(vector<int>& num, vector<int>& path, vector<vector<int> >& result)
    {
        if (existElement.size() == num.size())
        {
            result.push_back(path);
            return;
        }
        for (int i = 0; i < num.size(); ++i)
        {
            int val = num[i];
            if (existElement.find(val) == existElement.end())
            {
                existElement.insert(val);
                path.push_back(val);
                permuteHelper(num, path, result);
                path.pop_back();
                existElement.erase(val);
            }
        }
    }
};

#endif
