class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> s;
        for(string a:tokens){
                if(a == "+"){
                    long long s2 = s.top();
                    s.pop();
                    long long s1 = s.top();
                    s.pop();
                    s.push(s1+s2);
                }else if(a == "-"){
                
                    long long s2 = s.top();
                    s.pop();
                    long long s1 = s.top();
                    s.pop();
                    s.push(s1-s2);
                }else if(a == "*"){
                
                    long long s2 = s.top();
                    s.pop();
                    long long s1 = s.top();
                    s.pop();
                    s.push(s1*s2);
                }else if(a == "/"){
                
                    long long s2 = s.top();
                    s.pop();
                    long long s1 = s.top();
                    s.pop();
                    s.push(s1/s2);
                }else{
                    s.push(stoi(a));
                }
                    
            
        }
        long long ans = s.top();
        return ans;
    }
};