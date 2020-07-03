//
// Created by Anish Mookherjee on 30/05/20.
//

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if(intervals.empty())
            return result;
        
        sort(intervals.begin(),intervals.end());

        result.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(result.back()[1]<intervals[i][0])
                result.push_back(intervals[i]);
            else
                result.back()[1]=max(result.back()[1],intervals[i][1]);
        }

        return result;
    }
};
