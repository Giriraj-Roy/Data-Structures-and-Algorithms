// Deleting a node from its first occurence

class Node{
    public:
        int data;
        Node* next;
};

void delete_node(Node **head_ref, int key){
    if((*head_ref) -> data == key){
        (*head_ref) -> next = (*head_ref);
    }
    Node *temp = *head_ref;
    while((temp -> next) -> data != key){
        temp = temp-> next;
    }
    temp -> next = (temp -> next)->next;
}
