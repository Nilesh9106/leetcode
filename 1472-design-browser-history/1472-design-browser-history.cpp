class BrowserHistory {
    vector<string> stack;
    int top=-1;
public:
    BrowserHistory(string homepage) {
        stack.push_back(homepage);
        top++;
    }
    
    void visit(string url) {
        top++;
        if(top < stack.size()){
            stack.erase(stack.begin()+top,stack.begin()+stack.size());
        }
        stack.push_back(url);
    }
    
    string back(int steps) {
        
        top-=steps;
        if(top<0){
            top=0;
        }
        return stack[top];
    }
    
    string forward(int steps) {
        
        top+=steps;
        if(top>stack.size()-1){
            top=stack.size()-1;
        }
        
        return stack[top];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */