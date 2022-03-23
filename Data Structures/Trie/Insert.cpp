void insert(struct Trie *root, string word)
{
    struct Trie *curr = root;
    for(int i = 0; i < word.length(); i++)
    {
        int index = word[i] - 'a';
        if(curr->children[index] != NULL)
            curr->children[index] = getNode();
        curr = curr->children[index];
    }
    curr->isWord = true;
}
