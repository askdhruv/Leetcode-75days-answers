class Trie {
public:
    set<string> words;
    /** Initialize your data structure here. */
    Trie() {
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        words.insert(word);
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        return words.find(word)!=words.end();
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        for(set<string>::iterator it = words.begin(); it!=words.end(); it++){
            if((*it).rfind(prefix, 0) == 0) return true;
        }
        return false;
    }
};
