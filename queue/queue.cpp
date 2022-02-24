#include <iostream>
using namespace std;

struct Queue
{
    int rear, front, capacity;
    int *queue;

    Queue(int cap)
    {
        rear = 0;
        front = 0;
        capacity = cap;
        queue = new int;
    }
    void enqueue(int data)
    {
        if (rear == capacity)
        {
            cout << "The queue overflow" << endl;
            return ;
        }
        queue[rear] = data;
        rear++;
    }
    int isEmpty()
    {
        if (rear == front)
        {
            return 1;
        }
        return 0;
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "The queue is empty!" << endl;
            return ;
        }
        cout << "==========Stack elements are===========" << endl;
        for (int i = 0; i < rear; i++)
        {
            cout << queue[i];
            cout << endl;
        }
    }
    void dequeue()
    {
        if(isEmpty()){
           cout<<"The queue is empty"<<endl;
           return;
        }
        for (int i = 0; i < rear; i++)
        {
            queue[i]=queue[i+1];
        }
        rear--;
        return ;
    }
    int readFront(){
        if(isEmpty()){
            cout<<"The queue is empty"<<endl;
            return 0;
        }
        return queue[front];
    }
};

int main(){
    int cap,frontValue;
    cout<<"========enter the queue size: ";
    cin>>cap;
    Queue q(cap);
    q.display();
    
    q.enqueue(400);
    q.enqueue(300);
    q.enqueue(200);
    q.enqueue(100);

    q.display();

    frontValue=q.readFront();
    cout<<"The value of readFront is: "<<frontValue<<endl;

    q.dequeue();
    q.dequeue();

    q.display();
    frontValue=q.readFront();
    cout<<"The value of readFront is: "<<frontValue<<endl;
}