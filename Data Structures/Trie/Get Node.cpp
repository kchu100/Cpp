struct Trie *getNode(void)
    {
        struct Trie *curr = new Trie;
        curr->isWord = false;
        for(int i = 0; i < 26; i++)
            curr->children[i] = NULL;
        return curr;
    }
