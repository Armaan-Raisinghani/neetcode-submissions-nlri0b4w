class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        vector<int> out(temperatures.size(),0);
        int i = 0;
        while (i<temperatures.size()){
            if (s.empty() || temperatures[i]<=s.top().first) s.push({temperatures[i],i});
            else {
                while (!s.empty() && s.top().first < temperatures[i]) {
                    out[s.top().second] = i-s.top().second;
                    s.pop();
                }
            } 
            s.push({temperatures[i], i});
            i++;
        }
        return out;
    }
};
