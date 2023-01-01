#include <cstring>

class Solution {
public:
    void split_str( string const &str, const char delim,vector <std::string> &out )  
        {  
            
            stringstream s(str);  
              
            string s2;  
            while ( getline (s, s2, delim) )  
            {  
                out.push_back(s2); 
            }  
        }  
    bool wordPattern(string pattern, string s) {
        vector<string > v; 
        split_str(s,' ',v);
        
        unordered_map<char,string> m ;
        unordered_map<string,char> m2 ;
        
        if(v.size() != pattern.length()){
            cout<<s.length()<<" ";
            return false;
        }
        int i=0;
        while(i<pattern.length()){
            if(m[pattern[i]] != "" ){
                if(m[pattern[i]] != v[i]){
                    cout<<v[i]<<" ";
                    return false;
                }
            }else{
                m[pattern[i]] = v[i];
            }
            
            auto got2 = m2.find(v[i]);
            if(got2 == m2.end())
                m2[v[i]] = pattern[i];
            else if(got2->second != pattern[i])
                return false;
            i++;
            
        }
        return true;
    }
};