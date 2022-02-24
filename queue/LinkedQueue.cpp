#include <iostream>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->next = NULL;
        this->data = data;
    }
};
struct Queue
{
public:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        rear = front = NULL;
    }
void enqueue(int data){
    Node *temp=new Node(data);
    if(front==NULL){
        front=rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}
void display(){
    if (front==NULL)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    Node *current=front;
    while (current!=NULL)
    {
        cout<<current->data<<endl;
        current=current->next;
    }
}
void dequeue(){
    if (front==NULL)
    {
        cout<<"Empty queue"<<endl;
        return;
    }
    Node *temp=front;
    front=front->next;
    if (front==NULL)
    {
         rear=NULL;
    }
    delete temp;  
}
};
int main(){
   Queue *q=new Queue();
   q->display();
   q->enqueue(10);
   q->enqueue(11);
   q->enqueue(12);
   q->enqueue(13);
   q->enqueue(14);
   q->enqueue(15);
   q->display();
   for (int i = 0; i < 6; i++)
   {
        q->dequeue();
   }
   q->display();
   
}
