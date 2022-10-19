class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> m;
        for(string s:words){
            m[s]++;
        }
        
        multimap<int,string> a;
        int k1=0;
        for(auto i =m.rbegin();i!=m.rend();i++){
            // cout<<i.first<<endl;
            a.insert(make_pair(i->second,i->first));
        }
        vector<string> ans;
        for(auto i = a.rbegin();i != a.rend();i++){
            if(k1<k){
            ans.push_back(i->second);
            }
            k1++;
        }
        
        return ans;
    }
};