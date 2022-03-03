#include <iostream>
using namespace std;

struct Node
{
public:
    Node *prev;
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
struct doublylinkedList
{
public:
    Node *head;

public:
    doublylinkedList()
    {
        this->head = NULL;
    }

public:
    Node *addAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return newNode;
        }
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
        return newNode;
    }
    Node *addAtTheEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return newNode;
        }
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        return newNode;
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "Empty list";
            return;
        }
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
    void insertAfter(Node *before, int data)
    {
        Node *newNode = new Node(data);
        Node *temp=head;
        if (before->next == NULL)
        {
            before->next = newNode;
            newNode->prev = before;
            return;
        }

        temp=before->next;
        before->next=newNode;
        newNode->prev=before;
        newNode->next=temp;
        temp->prev=newNode;
        // while (temp != before)
        // {
        //     temp = temp->next;
        // }
        // Node *nextNode = temp->next;
        // temp->next = newNode;
        // newNode->prev = temp;
        // newNode->next = nextNode;

        // Node *after=before->next;
        // before->next=newNode;
        // newNode->next=after;
        // after->prev=newNode;
    }
    void displayFromBack(){
        if (head==NULL)
        {
            cout<<"Empty list";
            return;
        }
        Node *temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        while (temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->prev;
        }  
    }
    void addNodeBefore(Node *node,int data){
        Node *newNode=new Node(data);
        if (node->prev==NULL)
        {
            node->prev=newNode;
            newNode->next=node;
            head=newNode;
            return;
        }
        Node *before=node->prev;
        newNode->next=node;
        newNode->prev=before;
        before->next=newNode;
        
    }
};
int main()
{
    doublylinkedList *list = new doublylinkedList();
    Node *x = list->addAtTheEnd(30);
    Node *y = list->addAtBeginning(10);
    Node *z = list->addAtBeginning(20);
    list->insertAfter(y,40);
    list->addNodeBefore(y,50);
    list->display();
    cout<<"from back"<<endl;
    list->displayFromBack();
}
