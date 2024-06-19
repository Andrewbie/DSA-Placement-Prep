#include <iostream>
using namespace std;

class Node{
    public:
        Node *prev;
        int data;
        Node *next;

        Node(){
            this->prev = NULL;
            this->next = NULL;
        }
        Node(int data){
            this->prev = NULL;
            this->data = data;
            this->next = NULL;
        }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp = temp->next;
    }
    cout<<endl;
}

int lengthLL(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        insertAtHead(head, tail, data);
    }
    else{
        Node* newNode = new Node(data);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAtPos(Node* &head, Node* &tail, int data, int position){
    int length = lengthLL(head);
    if(position<=1){
        insertAtHead(head,tail,data);
    }
    else if(position>length){
        insertAtTail(head, tail, data);
    }
    else{
        Node* newNode = new Node(data);
        Node* previous = NULL;
        Node* current = head;
        while(position!=1){

            previous = current;
            current = current->next;
            position--;
        }
        newNode->prev = previous;
        newNode->next = current;
        previous->next = newNode;
        current->prev = newNode;
    }
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(position<1 || position>lengthLL(head)){
        cout<<"Invalid index"<<endl;
    }else{
    if(position==1){
        Node *temp = head;
        head = temp->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;     
    }
    else if(position==lengthLL(head)){
        Node* temp = tail;
        tail = temp->prev;
        tail->next=NULL;
        temp->prev = NULL;
        delete temp;
    }
    else{

        Node* current = head;
        while (position!=1){
            current = current->next;
            position--;
        }

        Node* previous = current->prev;
        Node* nextNode = current->next;

        previous->next = nextNode;
        nextNode->prev = previous;

        current->next=NULL;
        current->prev=NULL;
        delete current;
    }
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtTail(head, tail, 1000);

    insertAtPos(head, tail, 10, 5);
    printLL(head);

    deleteNode(head, tail, 1);
    printLL(head);
}