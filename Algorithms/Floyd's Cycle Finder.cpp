//Cycle Detection using Floyd's Cycle Finding Algorithm
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *slow, *fast;
    if(head->next != NULL)
    {
        slow = head->next;
        fast = head->next;
    }

    while(slow != NULL  && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
    }
    return false;
}
