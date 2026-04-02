class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int m = 0;
        while (l<r){
            int area = (r-l)*std::min(heights[l],heights[r]);
            cout << area<<endl;
            if (area>m) m = area;
            if (heights[l]>heights[r]) r--;
            else l++;
        }
        return m;
    }
};
