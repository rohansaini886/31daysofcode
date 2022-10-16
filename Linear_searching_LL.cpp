#include<iostream>
using namespace std;

class  node{
public:
    int data;
    node* next;

    node(int val){
        data = val; // Constructor
        next = NULL;
    }
};

void insertAtTail(node* &head,int val){



    node* n = new node(val); // created a new node n which has data = value and next = NULL
    if (head== NULL)
    {
        head = n;
        return ;   
    }
    
    // Head is pointing to initial value of node 
    node* temp = head;  // iterator for traversing to last of linked list
    while (temp->next!=NULL)
    {
        temp = temp->next; // temp stores address and temp->next give address
    }
    temp->next=n;
}

void InsertAtHead(node* &head, int val){

    node* n ;
    n = new node(val);
    n->next = head;
    head= n;

}

bool search(node* head, int key){

    node* temp;
    temp = head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;   
}

void display(node* head){
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;   
}

int main(){
    
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);

    display(head);
    InsertAtHead(head, 4);
    display(head);

     cout<<search(head,3)<<endl;

    return 0;
}