class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int level_l[r+1];
        level_l[0]=height[0];
        level_l[r]=height[r];
        int i = 1;
        while (i<height.size()){
            if (height[i]>level_l[i-1]) level_l[i]=height[i];
            else level_l[i]=level_l[i-1];
            i++;
        }
        i = r-1;
        int level_r[r+1];
        level_r[0]=height[0];
        level_r[r]=height[r];
        while (i>0){
            if (height[i]>level_r[i+1]) level_r[i]=height[i];
            else level_r[i]=level_r[i+1];
            cout << i << " ";
            i--;
            
        }
        int sum = 0;
        for (int i = 0; i < height.size(); i++) {
            sum+=std::min(level_l[i],level_r[i])-height[i];
        }
    return sum;
    }
};
