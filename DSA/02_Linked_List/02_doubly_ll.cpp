#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;

    if(head != NULL){

        head->prev = n;
    }

}

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }

    temp -> next = n;
    n->prev = temp;
}

int main(){

}