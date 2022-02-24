#include <iostream>
using namespace std;
#define MAX 200

class Dequeue
{
public:
    int front;
    int rear;
    int size;
    int dequeue[MAX];

public:
    Dequeue(int size)
    {
        this->front = -1;
        this->rear = 0;
        this->size = size;
    }
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }
    bool isFull()
    {
        if ((front == -1 && rear == size - 1) || front == rear + 1)
        {
            return true;
        }
        return false;
    }
    void addToFront(int data)
    {
        if (isFull())
        {
            cout << "Overflow!" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (front == 0)
        {
            front = size - 1;
        }
        else
        {
            front = front - 1;
        }
        dequeue[front] = data;
    }
    void addToRear(int data)
    {
        if (isFull())
        {
            cout << "Overflow!" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == size - 1)
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        dequeue[rear] = data;
    }
    void deleteFront()
    {
        if (isEmpty())
        {
            cout << "under flow!" << endl;
            return;
        }
        if (rear == front)
        {
            rear = -1;
            front = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    void deleteRear()
    {
        if (isEmpty())
        {
            cout << "Underflow!!" << endl;
            return;
        }
        if (rear == front)
        {
            rear = -1;
            front = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear = rear - 1;
        }
    }
    void display()
    {
        cout << "--------DEQUE----------=======" << endl;
        if (isEmpty())
        {
            cout << "Underflow";
            return;
        }
        if (front > rear)
        {
            for (int i = front; i <= size - 1; i++)
            {
                cout << dequeue[i] << " ";
                cout << endl;
            }
            for (int j = 0; j <= rear; j++)
            {
                cout << dequeue[j] << " ";
                cout << endl;
            }
        }
        else
        {
            for (int k = front; k <= rear; k++)
            {
                cout << dequeue[k] << " ";
                cout << endl;
            }
        }
    }
};
int main()
{
    Dequeue d(10);
    d.addToFront(10);
    d.addToFront(20);
    d.display();
}