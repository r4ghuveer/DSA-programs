class TrieNode{
public:
    bool word;
    unordered_map<char,TrieNode*> children;
    TrieNode(bool b = false){
        word= b; 
    }


    
};

class WordDictionary {
private:
    TrieNode* root;
    TrieNode* curr;
    char c;
    
public:
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        curr = root;
        for(auto c : word){
            if(curr->children.find(c)==curr->children.end()){
                curr->children[c]= new TrieNode();
            }
            curr = curr->children[c];
        }
        curr->word=true;
    }
    
    bool search(string word) {
        return dfs(0,root,word);
        }
    bool dfs(int j,TrieNode* root,string word){
        curr = root;
        for(int i=j;i<word.size();i++){
            c=word[i];
            if(c=='.'){
                for (auto it = curr->children.begin(); it != curr->children.end(); ++it){
                    if(dfs(i+1,it->second,word)){
                        return true;
                    }
                }
                return false;
            }
            else{
                if (curr->children.find(c)==curr->children.end()){
                    return false;
                }
                curr=curr->children[c];
            }
        }
        return curr->word;
    }
};
