//Reverse
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head)
{
    if(head == NULL)
        return head;
    else
    {
        SinglyLinkedListNode *curr = head, *prev = nullptr, *next = nullptr;
        
        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev; //curr and next will be pointing to null
        return head;
    }

}
