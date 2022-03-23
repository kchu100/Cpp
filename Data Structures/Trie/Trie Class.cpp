//Runtime O(n)
//n = # of characters in a word
struct Trie {
    struct Trie *children[26];
    bool isWord;
    
    struct Trie *getNode(void);
	void insert(struct Trie *root, string word);
	bool search(struct Trie *root, string word);
	//bool startsWith(string prefix) { return getNode() != NULL; }
};
