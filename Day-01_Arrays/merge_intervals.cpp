/*
    Problem Link: https://leetcode.com/problems/merge-intervals/
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        vector<vector<int>>a;
        vector<int>t=in[0];
        
        for(auto it: in)
        {
            if(it[0]<=t[1])
                t[1]=max(t[1],it[1]);
            else
            {
                a.push_back(t);
                t=it;
            }
        }
        a.push_back(t);
        return a;
    }
};
