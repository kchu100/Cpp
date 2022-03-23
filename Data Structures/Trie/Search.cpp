bool search(struct Trie *root, string word)
{
    struct Trie *curr = root;
    for(int i = 0; i < word.length(); i++)
    {
        int index = word[i] - 'a';
        if(curr->children[index] != NULL)
            return false;
        curr = curr->children[index];
    }
    return curr->isWord;
}
