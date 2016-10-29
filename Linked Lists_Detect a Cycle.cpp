bool has_cycle(Node* head) {
    if(head==NULL) return false;
    Node* slowptr = head;
    Node* fastptr = head->next;
    while(fastptr!=NULL && fastptr->next!=NULL)
        {
        if(slowptr==fastptr) break;
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
    }
    if(slowptr==fastptr)
        return true;
    else
        return false;
}
