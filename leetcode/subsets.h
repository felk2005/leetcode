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
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        sort(S.begin(), S.end());
        vector<vector<int> > result;
        vector<int> temp;
        subsetsHelper(S, 0, result, temp);
        return result;
    }
    
private:
    void subsetsHelper(vector<int>& source, int start, vector<vector<int> >& result, vector<int>& temp)
    {
        result.push_back(temp);
        for (int i = start; i < source.size(); ++i)
        {
            temp.push_back(source[i]);
            subsetsHelper(source, i + 1, result, temp);
            temp.pop_back();
        }
    }
};
#endif
