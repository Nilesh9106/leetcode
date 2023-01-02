class Solution {
public:
    bool islowerupper(string text) {
        for (int i = 1; i < text.size();i++){
            if (isupper(text[0]) != isupper(text[i])){
                return false;
            }
        }
        return true;
    }
    bool iscamel(string word){
        if(islower(word[0])){
            return false;
        }
        
        for(int i=1;i<word.length();i++){
            if(isupper(word[i])){
                return false;
            }
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        if(islowerupper(word)){
            return true;
        }
        
        if(iscamel(word)){
            return true;
        }
        
        return false;
    }
};