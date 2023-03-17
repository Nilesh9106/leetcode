class TrieNode{
public:
    bool end;
    TrieNode* children[26];

    TrieNode() {
        end = false;
        memset(children, 0, sizeof(children));
    }
};


class Trie {
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode * temp = root;
        for(char a:word){
            if(temp->children[a-'a'] ==NULL)
                temp->children[a-'a'] = new TrieNode();
            temp = temp->children[a-'a'];
        }
        temp->end=true;
    }
    
    bool search(string word) {
        TrieNode * temp = root;
        
        for(char a:word){
            int index = a-'a';
            if(temp->children[index] == NULL)return false;
            temp = temp->children[index];
        }
        return temp->end;
    }
    
    bool startsWith(string prefix) {
        TrieNode * temp = root;
        
        for(char a:prefix){
            int index = a-'a';
            if(temp->children[index] == NULL)return false;
            temp = temp->children[index];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */