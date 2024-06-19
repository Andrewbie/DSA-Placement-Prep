#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            cout<<"Contructor called"<<endl;
            this->next = NULL;
        }
        Node(int data){
            // cout<<"Contructor called"<<endl;
            this->data = data;
            this->next = NULL;
        }
        ~Node(){
            cout<<"Destrutor called"<<this->data<<endl;
        }
};

void printll(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int lengthll(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    return count;
}

void insertAtHead(Node* &head,Node* &tail, int data){ //Always pass the head value during insertion as a referance not as a value

    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(tail==NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail=newNode;
    }
}

void insertAtPos(Node* &head, Node* &tail, int data, int position){
    int length = lengthll(head);

    
        if(position <= 1){
            insertAtHead(head, tail, data);
        }
        else if(position >= length+1){
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
            previous->next = newNode;
            newNode->next = current;
            
        }
}

void deleteNode(Node* &head, Node* &tail, int pos){
    int length = lengthll(head);
    if(head==NULL){
        cout<<"Cannot delete, linkedlist is empty"<<endl;
    }else{
        if(pos==1){
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else if(pos==length){
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail = temp;
        }
        else{
            Node* prev = NULL;
            Node* current = head;

            while(pos!=1){
                prev = current;
                current = current->next;
                pos--;
            }
            prev->next = current->next;
            current->next = NULL;
            delete current;
        }
    }
}

Node* reverseListRec(Node* previous, Node* current){
    if(current == NULL){
        return previous;
    }
    Node* temp = current->next;
    current->next = previous;
    reverseListRec(current, temp);

    // return reverseList;
}

void reverseList(Node* &head, Node* &tail){
    // Node* previous = NULL;
    // Node* current = head;
    // while(current!=NULL){
    //     Node* temp = current->next;
    //     current->next = previous;
    //     previous = current;
    //     current = temp;
    // }
    head = reverseListRec(NULL,head);
}



int main(){
    
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);




    insertAtPos(head, tail, 10, 1);
    printll(head);


    // deleteNode(head,tail,3);
    reverseList(head,tail);
    printll(head);
}