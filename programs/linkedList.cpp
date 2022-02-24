#include <iostream>

using namespace std;

class Node{
    public:
           int data;
    Node * next;
    Node(){
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class linkedList
{
public:
    Node *head;
public:
    linkedList(){
        head=NULL;
    };
void addNewNode(int data){
    Node *newNode=new Node(data);
    if (head==NULL){
        head=newNode;
        return;
    }
    Node *temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp=temp->next;
}
void display(){
    if (head==NULL)
    {
         cout<<"Empty list"<<endl;
         return;
    }
    Node *current=head;
    while (current->next!=NULL)
    {
        cout<<current->data<<endl;
        current=current->next;
    }
}
};



int main(){
   linkedList list;
	list.addNewNode(2);
	list.addNewNode(3);
	list.addNewNode(4);
	list.addNewNode(5);
	list.addNewNode(6);
	list.display();
	return 0;
}