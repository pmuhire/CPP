#include <iostream>
using namespace std;

struct Node
{
public:
    Node *prev;
    int data;
    Node *next;
public:
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
struct doublylinkedList
{
    public:
        Node *head;
    public:
        doublylinkedList(){
            this->head=NULL;
        }
    public:
         void addAtBeginning(int data){
             Node *newNode=new Node(data);
             if (head==NULL)
             {
                head=newNode;
                return;
             }
            Node * temp=head;
            head=newNode;
            newNode->next=temp;
            temp->prev=newNode;
            // head->prev=newNode;
            // newNode->next=head;
            // head=newNode;
         }
         void addAtTheEnd(int data){
             Node *newNode=new Node(data);
             if (head==NULL)
             {
                head=newNode;
                return;
             }
             Node *temp=head;
             while (temp->next)
             {
                 temp=temp->next;
             }
             temp->next=newNode;
             newNode->prev=temp;  
         }
         void display(){
             if (head==NULL)
             {
                 cout<<"Empty list";
                 return;
             }
             Node *current=head;
             while (current!=NULL)
             {
                cout<<current->data<<endl;
                current=current->next;
             }
         }
};
int main(){
    doublylinkedList *list=new doublylinkedList();
    list->addAtTheEnd(30);
    list->addAtBeginning(10);
    list->addAtBeginning(20);
    list->display();
}

