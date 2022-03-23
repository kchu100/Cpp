//Delete a node
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) 
{
    SinglyLinkedListNode *curr, *del;
    if(position == 0)
    {
        del = head;
        head = head->next;
        delete del;
    }
    else 
    {
        del = head;
        for(int i = 0; i < position; i++)
        {
            curr = del;
            del = del->next;
        }

        curr->next = del->next;
        delete del;
    
    }
    return head;
}

//Delete duplicate nodes from a sorted list
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head)
{
    SinglyLinkedListNode *current = head;
    SinglyLinkedListNode *prev = current;
    SinglyLinkedListNode *n = current->next;
    SinglyLinkedListNode *del;
    
    while(n != NULL)
    {
        if(head->data == head->next->data)
        {
            del = current;
            head = head->next;
            current = head;
            n = current->next;
            prev = current;
            del->next = nullptr;
            delete del;
        }
        else if(current->data == n->data)
        {
            del = current;
            current = n;
            n = current->next;
            prev->next = current;
            del->next = nullptr;
            delete del;
        }
        else
        {
            prev = current;
            current = current->next;
            n = current->next;
        }
    }
    return head;
}
