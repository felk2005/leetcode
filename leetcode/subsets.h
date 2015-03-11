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
        for (int i = 0; i < num.size(); ++i)
        {
            visited.push_back(false);
        }
        vector<int> path;
        vector<vector<int> > result;
        sort(num.begin(), num.end());
        permuteHelper(num, path, result);
        return result;
    }
    
private:
    set<int> existElement;
    vector<bool> visited;
    void permuteHelper(vector<int>& num, vector<int>& path, vector<vector<int> >& result)
    {
        if (path.size() == num.size())
        {
            result.push_back(path);
            return;
        }
        for (int i = 0; i < num.size(); ++i)
        {
            if (i > 0 && num[i] == num[i - 1] && !visited[i - 1])
                continue;
            if (!visited[i])
            {
                path.push_back(num[i]);
                visited[i] = true;
                permuteHelper(num, path, result);
                visited[i] = false;
                path.pop_back();
            }
        }
    }
};

#endif
