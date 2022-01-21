// inserting a node at the front
class Node{
    public:
        int data;
        Node *next;
};

void push( Node **head_ref, int new_data){   // Time Complexity of void push(...) is O(1)
    Node *new_node = new Node();            //  Amount of work is always constant
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}