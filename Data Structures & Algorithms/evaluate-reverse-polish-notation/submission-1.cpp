class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string &st:tokens){
            if (st == "+"){
                int v1 = s.top();
                s.pop();
                int v2 = s.top();
                s.pop();
                s.push(v1+v2);
            }
            else if (st == "-"){
                int v1 = s.top();
                s.pop();
                int v2 = s.top();
                s.pop();
                s.push(v2-v1);
            }
            else if (st == "*"){
                int v1 = s.top();
                s.pop();
                int v2 = s.top();
                s.pop();
                s.push(v1*v2);
            }
            else if (st == "/"){
                int v1 = s.top();
                s.pop();
                int v2 = s.top();
                s.pop();
                s.push(v2/v1);
            }
            else {
                s.push(stoi(st));
            }
        }
    return s.top();
    }
};
