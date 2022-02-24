#include <iostream>
using namespace std;

const int n = 50;
int top = -1;
int stack[n];

int isFull()
{
    if (top == n - 1)
    {
        return 1;
    }
    return 0;
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}
void push(int data)
{
    if (isFull())
    {
        cout << "Stack overflow" << endl;
    }
    top++;
    stack[top] = data;
}
void pop()
{
    if (isEmpty())
    {
        cout << "Stack underflow" << endl;
    }
    cout << "The poped element is " << stack[top] << endl;
    top--;
}

int peek()
{
    if (!isEmpty())
    {
        return stack[top];
    }
    return INT8_MIN;
}

void display()
{
    if (top >= 0)
    {
        cout << "Stack elements are :" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "The stack is emty"<<endl;
    }
}

int main()
{
    int operation;
    cout << "Enter 1(PUSH),2(POP),3(PEEK)" << endl;
    cin>>operation;
    int last=0;
    switch (operation)
    {
    case 1:
        push(300);
        display();
        break;
    case 2:
        pop();
        display();
        break;
    case 3:
        last=peek();
        cout<<last<<endl;
        display();
        break;
         
    }
}