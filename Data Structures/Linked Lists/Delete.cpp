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
