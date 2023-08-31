#include <iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

void insertAtTail(Node* &head, int val){
    
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(Node* &head, int val){

    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void display(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

void deletion(Node* &head, int val){

    Node* temp = head;

    if(head == NULL){
        return;
    }
    while(temp->next->data != val){
        temp = temp->next;
    }
    Node* toDelete = temp -> next;
    temp->next = temp->next->next;
    delete toDelete;
}

void deletionAtHead(Node* &head){
    Node* toDelete = head;
    head = head -> next;
    delete toDelete;
}

bool isCircular(Node* head){

    Node* temp = head->next;

    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }

    if(temp=head) return true;

    return false;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;
    Node* temp = head;

    while(temp != NULL){

        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}

int main(){
    Node *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    display(head);
    cout << endl;

    deletion(head, 20);

    display(head);

    cout << endl;

    if(detectLoop(head)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}