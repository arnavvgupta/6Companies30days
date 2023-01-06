class Solution {
public:
    int length(vector<int>& p1, vector<int>& p2){
        int squ=(p2[0]-p1[0])*(p2[0]-p1[0]) + (p2[1]-p1[1])*(p2[1]-p1[1]);
        return squ;
    }
    
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size();
        int tot=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int> m;
            for(int j=0;j<n;j++){
                m[length(points[i],points[j])]++;
            }
            for(auto i:m){
                if(i.second){
                    tot+=(i.second*(i.second-1));
                }
            }
        }
        return tot;
    }
};