#include <bits/stdc++.h>
class Solution {
public:
    int length(vector<int>& p1, vector<int>& p2){
        int squ=(p2[0]-p1[0])*(p2[0]-p1[0]) + (p2[1]-p1[1])*(p2[1]-p1[1]);
        return squ;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int> ans={
            length(p1,p2),
            length(p1,p3),
            length(p1,p4),
            length(p2,p3),
            length(p2,p4),
            length(p3,p4), 
        };
        return !ans.count(0) && ans.size() == 2;
        
    }
};