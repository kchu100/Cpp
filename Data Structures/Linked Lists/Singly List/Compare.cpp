//Compare Linked Lists
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) { 
    SinglyLinkedListNode *curr1 = head1, *curr2 = head2;
    bool isEqual;
        while(curr1->next != NULL && curr2->next != NULL)
        {
            if(curr1->data == curr2->data)
                isEqual = true;
            else
                isEqual = false;

            curr1 = curr1->next;
            curr2 = curr2->next;
            
            return isEqual;
        }
    return (curr1 == NULL && curr2 == NULL); 

//This one is more simplified
/*
    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data != head2->data)
            return false;
            
            head1 = head1->next;
            head2 = head2->next;
    }
    return head1 == NULL && head2 == NULL; */

}
