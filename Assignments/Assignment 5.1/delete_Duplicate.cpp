// https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem?isFullScreen=true

SinglyLinkedListNode *curr = llist;
    while (curr != NULL) {
        SinglyLinkedListNode *next = curr->next;
        while (next != NULL && next->data == curr->data)
            next = next->next;
        curr->next = next;
        curr = next;
        if (next != NULL) next = next->next;
    }
    return llist;
