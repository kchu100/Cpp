//Get Node position from tail
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode *curr = head;
    int count = 0, value;
    while(curr != NULL)
    {
        curr=curr->next;
        count++;
    }
    
    curr = head;
    for(int i = 0; i < (count - positionFromTail) - 1; i++)
        curr = curr->next;
        
    value = curr->data;
    return value;
}
