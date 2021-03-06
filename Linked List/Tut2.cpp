#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};

// inserting a node at the front

void push( Node **head_ref, int new_data){   // Time Complexity of void push(...) is O(1)
    Node *new_node = new Node();            //  Amount of work is always constant
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

// inserting a node after a given node

void insertAfter( Node *prev_node, int new_data){    // Time Complexity of void push(...) is O(1)
                                                    //  Amount of work is always constant
    if(prev_node == NULL){
        cout << "Given node cannot be NULL";
        return;
    }
    Node *new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = prev_node -> next;
    prev_node -> next = new_node;
}

// inserting a node at the end of linked list

void append( Node *head_ref, int new_data){
    Node *new_node = new Node();
    while(head_ref != NULL){
        head_ref = head_ref -> next;
    }
    new_node -> data = new_data;
    new_node -> next = NULL;
    head_ref -> next = new_node;
    return;
}
