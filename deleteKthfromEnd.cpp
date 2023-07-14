/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

int length(Node *head){
    int x = 0;
    while(head != NULL){
        x++;
        head = head->next;
    }
    return x;
}
Node* removeKthNode(Node* head, int K)
{
    // Write your code here.

    //delete (k-i+1)th node from start.
    int sz=length(head);
    int ok = sz-K+1;
    Node* tmp = head;
    if(ok == 1){
        Node* ptr = head->next;
        head -> next = NULL;
        return ptr;
    }
    
    else{
        int cnt = 2;
        for( ; cnt<ok;cnt++){
            tmp = tmp->next;
        }
        Node *pk =tmp->next;
        tmp->next = tmp->next->next;
        delete(pk);
        return head;
    }
}
