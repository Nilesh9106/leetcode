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
            // cout<<"deleting from "<<top<<" to "<<stack.size()-1<<endl;
            stack.erase(stack.begin()+top,stack.begin()+stack.size());
        }
        // cout<<"inserting "<<url <<" at "<<stack.size()<<" prev "<<stack[stack.size()-1]<<endl;
        stack.push_back(url);
    }
    
    string back(int steps) {
        
        top-=steps;
        if(top<0){
            top=0;
        }
        // cout<<"going back to "<<top<<endl;
        // cout<<stack[top]<<endl;
        return stack[top];
    }
    
    string forward(int steps) {
        // cout<<top<<" ";
        top+=steps;
        if(top>stack.size()-1){
            top=stack.size()-1;
        }
        // cout<<"going forward to "<<top<<endl;
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