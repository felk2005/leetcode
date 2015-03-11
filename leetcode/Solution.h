//
//  Solution.h
//  leetcode
//
//  Created by YuanXuan on 3/11/15.
//  Copyright (c) 2015 felk. All rights reserved.
//

#ifndef leetcode_Solution_h
#define leetcode_Solution_h
#include <vector>

using namespace std;
class Solution
{
public:
    int BinarySearch(const vector<int>& source, int target)
    {
        if (source.size() == 0)
            return 0;
        int left = 0;
        int right = source.size() - 1;
        int mid = 0;
        
        while (left + 1 < right)
        {
            mid = left + ((right - left) >> 1);
            if (source[mid] < target)
            {
                left = mid;
            }
            else if (source[mid] > target)
            {
                right = mid;
            }
            else
            {
                right = mid;
            }
        }
        if (source[left] >= target)
            return left;
        else if (source[right] < target)
            return right + 1;
        return right;
        //return 1;
    }
};

#endif
